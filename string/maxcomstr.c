// Copyright (c) 2013 Kangzj.net.
// Author: Jasper (kangzjnet@gmail.com)

#include <stdio.h>
#include <stdlib.h>

void maxcomstr(char s[], char t[]) {
    int index=0,lens,lent,length=0,length1,i=0,j,k;
    lens = strlen(s);
    lent = strlen(t);
    while(i < lens){
        j = 0;
	while(j < lent){
	    if(s[i] == t[j]){
	    	length1 = 1;
		for(k=1;s[i+k]==t[j+k];k++)length1++;
		if(length1>length){
		    index = i;
		    length = length1;
		}
	        j+=length1;
	    } else {
	        j++;
            }
	}
	i++;
    }
    printf("max common string is:\n");
    for(i=0;i<length;i++) {
        printf("%c", s[index+i]);
    }
    printf("\n");
}

void main() {
    char s[] = {'a', 'b', 'c', 'c', 'd', '\0'};
    char t[] = {'b', 'c', 'c', 'd', '\0'};
    maxcomstr(s, t); 
}
