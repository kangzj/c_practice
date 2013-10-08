// Copyright (c) 2013 Kangzj.net.
// Author: Jasper (kangzjnet@gmail.com)

#include "create_tree.h"

/** create tree from recursive definition*/
int create_tree(NODEPTR *root) {
    NODEPTR t, s[N];
    char str[N], *p=str;
    int top = 0, n = 0, tag;

    gets(str);

    for(;*p;*p++) {
        switch(*p) {
        case '(':
            tag = 1;
            top++;
            s[top] = t;
            break;
        case ',':
            tag = 0;
            break;
        case ')':
            top --;
            break;
        default:
            t = (NODEPTR)malloc(sizeof(NODE));
            t->char_data = *p;
            t->lchild = NULL;
            t->rchild = NULL;
            if(n == 0){
                *root = t;
                t->parent = NULL;
            } else {
                if(tag == 1) {
                    s[top]->lchild = t;
                } else {
                    s[top]->rchild = t;
                }
                t->parent = s[top];
            }
        }
        n++;
    }
}

/*
int main() {
    NODEPTR* root = NULL;
    root = (NODEPTR*)malloc(sizeof(NODEPTR));
    create_tree(root);
    printf("%c,%c,%c\nOK!\n", (*root)->char_data, (*root)->lchild->char_data, (*root)->rchild->char_data);
    return 0;
}*/
