#include "binary_trees.h"

/**
 * binary_tree_full - checks if it is balance
 * @tree: pinter t head node
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
    int full = 0;
    if (tree == NULL)
        return (0);
    if (tree->left == NULL && tree->right == NULL)
        return 1;
    if ((tree->left == NULL && tree->right) || (tree->left && tree->right == NULL))
        return (0);
    // Recursively check the left and right subtrees.
    return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
  
   
}