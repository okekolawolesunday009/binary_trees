#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include "2-binary_tree_insert_right.c"
#include "1-binary_tree_insert_left.c"
#include "binary_tree_print.c"
#include "11-binary_tree_size.c"
#include "0-binary_tree_node.c"
#include "14-binary_tree_balance.c"
#include "9-binary_tree_height.c"
#include "17-binary_tree_sibling.c"


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    binary_tree_t *sibling;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 128);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root->right, 402);
    root->left->left = binary_tree_node(root->left, 10);
    root->right->left = binary_tree_node(root->right, 110);
    root->right->right->left = binary_tree_node(root->right->right, 200);
    root->right->right->right = binary_tree_node(root->right->right, 512);

    binary_tree_print(root);
    sibling = binary_tree_sibling(root->left);
    printf("Sibling of %d: %d\n", root->left->n, sibling->n);
    sibling = binary_tree_sibling(root->right->left);
    printf("Sibling of %d: %d\n", root->right->left->n, sibling->n);
    sibling = binary_tree_sibling(root->left->right);
    printf("Sibling of %d: %d\n", root->left->right->n, sibling->n);
    sibling = binary_tree_sibling(root);
    printf("Sibling of %d: %p\n", root->n, (void *)sibling);
    return (0);
}
