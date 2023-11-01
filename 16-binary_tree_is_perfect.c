#include "binary_trees.h"

/**
 * binary_tree_perfect - checks if it is perfect
 * @tree: pinter t head node
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int d, perfect = 0;
  
    if (tree->left == NULL && tree->right == NULL)
        return (d == perfect + 1);

    if (tree->left == NULL || tree->right == NULL)
        return (1);
    else 
        return (0);
 
    // Left and right subtrees must be perfect.
    return binary_tree_is_perfect(tree->left) &&
           binary_tree_is_perfect(tree->right);
   
}