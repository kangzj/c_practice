#makefile
CXX=g++

INC=./inc/
SRC=./src/
BIN=./bin/
TMP=./tmp/

OBJ:=\
	$(addprefix $(TMP), \
	$(addsuffix .o, $(basename $(notdir $(wildcard src/*.cpp)))))

TARGET=$(BIN)main
CXXFLAG=-c -I$(INC) -MMD -MP -MF
DEP:=$(wildcard $(addsuffix .d, ${OBJ}))

$(TARGET):$(OBJ)
	$(CXX) -o $@ $^
$(OBJ):$(TMP)%.o:$(SRC)%.cpp
	$(CXX) $(CXXFLAG) $@.d -o $@ $^
clean:
	-rm -f $(TMP)* $(BIN)*
	-include  $(DEP)
