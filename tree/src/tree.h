// Copyright (c) 2013 Panguso Inc.
// Author: Kangzengji (Kangzengji@panguso.com)


#ifndef TREE_H_
#define TREE_H_
//max nodes of tree
#define N 50

// tree definition
typedef struct NODESTRUCT {
    int int_data;
    char char_data;
    struct NODESTRUCT* parent;
    struct NODESTRUCT* lchild;
    struct NODESTRUCT* rchild;
} NODE, *NODEPTR;

#endif  // TREE_H_

