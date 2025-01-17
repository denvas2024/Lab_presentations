#include <stdio.h>
#include <stdlib.h>

typedef struct tnode *Treeptr;

struct tnode {
 int data;
 Treeptr left;
 Treeptr right;
};

void treeprint(Treeptr tree);
void treeprintd(Treeptr tree);
Treeptr addtree(Treeptr root, int val);
void free_mem(Treeptr tree);

int main (){
    Treeptr root;
    root = NULL;

    root=addtree(root, 9);
    root=addtree(root, 4);
    root=addtree(root, 15);
    root=addtree(root, 20);
    root=addtree(root, 13);
    root=addtree(root, 13);
    root=addtree(root, 23);
    root=addtree(root, 7);

    printf("Print tree in ascending order\n");
    treeprint(root);
    printf("Print tree in descending order\n");      
    treeprintd(root);

    free_mem(root);
}

Treeptr addtree(Treeptr root, int val){

Treeptr newNode;

    //First value is always at the root of the tee
    if(root == NULL){

        newNode = malloc(sizeof(struct tnode));
        newNode->data  = val;
        newNode->left  = NULL;
        newNode->right = NULL;
        return newNode;
    }

    //Tree already contains data. Decide whether the new value will be inserted at the left or right 
    //subtree. We don't consider values already in the tree (= case)

    if(val<root->data)  //Check for the left subtree, and repeat the process
        root->left = addtree(root->left,val);
    else if(val> root->data )    //Check for the right subtree, and repeat the process
        root->right =  addtree(root->right,val);

    //Always return value is the root
    return root;    
 
}

/* 
Print tree from the left to present values in ascending order
*/

void treeprint(Treeptr tree){


    if (tree!=NULL)
    {
        treeprint(tree->left);
        printf("%d\n",tree->data);
        treeprint(tree->right);
    }
}

/* 
Print tree from the right to present values in descending order
*/

void treeprintd(Treeptr tree){

  
    if (tree!=NULL)
    {
        treeprintd(tree->right);
        printf("%d\n",tree->data);
        treeprintd(tree->left);
    }
}

void free_mem(Treeptr tree){

    if (tree!=NULL)
    {
        free_mem(tree->left);
        free_mem(tree->right);
        free(tree);
    }
}