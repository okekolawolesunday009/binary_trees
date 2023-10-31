#include "main.h"

struct node* insert(struct node* root, int data){
if (root == NULL)
    return create(data);

if (data < root->data)
    root->left = insert(root->left, data);
else if (data > root->data)
    root->right = insert(root->right, data);

    return root;
}

void inOrderTraversal(struct node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}
