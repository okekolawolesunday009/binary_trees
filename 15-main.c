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
#include "15-binary_tree_is_full.c"


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int full;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    root->left->left = binary_tree_node(root->left, 10);
    binary_tree_print(root);

    full = binary_tree_is_full(root);
    printf("Is %d full: %d\n", root->n, full);
    full = binary_tree_is_full(root->left);
    printf("Is %d full: %d\n", root->left->n, full);
    full = binary_tree_is_full(root->right);
    printf("Is %d full: %d\n", root->right->n, full);
    return (0);
}