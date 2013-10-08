// Copyright (c) 2013 Kangzj.net.
// Author: Jasper (kangzjnet@gmail.com)

#include "btree_traversal.h"

int main() {
    NODEPTR* root;
    root = (NODEPTR*)malloc(sizeof(NODEPTR));
    create_tree(root);

    printf("post order traversal r:\n");
    porder_traversal_r(*root);
    printf("\n");

    return 0;
}

//Recursive method
void porder_traversal_r(NODEPTR root) {
    if(root != NULL) {
        porder_traversal_r(root->lchild);
        porder_traversal_r(root->rchild);
        printf("%c ", root->char_data);
    }
}

void porder_traversal_non_r(NODEPTR root) {
    //begin;
}
