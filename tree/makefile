#makefile by kangzjnet@gmail.com
CXX=g++
GCC=gcc

TMP=./tmp/
SRC=./src/
BIN=./bin/

OBJS=\
	 $(addprefix $(TMP), \
	 $(addsuffix .o, $(basename $(wildcard $(SRC)*.cpp)))

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
create_tree:
	$(GCC) -o $(BIN)create_tree $(SRC)create_tree.c -g
