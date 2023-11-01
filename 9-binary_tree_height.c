#include "binary_trees.h"

/**
 * binary_tree_height - prints the height of a tree
 * @tree: the pointer node
 * Return: always height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    const binary_tree_t *left = NULL, *right = NULL;
    size_t h_l = 0;
    size_t h_r =  0;
    if (tree == NULL)
        return (0);
    while (tree)
    {
        if (tree->left )
        {
            left = tree->left;
            h_l = binary_tree_height(tree->left) + 1;
        }
        else
            h_l = 0;
        if (tree->right)
        {
            right = tree->right;
            h_r = binary_tree_height(tree->right) + 1;
        }
        else
            h_r = 0;
        if (h_l < h_r)
            return (h_r);
		else
			return (h_l);
    }
}