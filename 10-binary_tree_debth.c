#include "binary_trees.h"

/**
 * binary_tree_depth - prints the dept of anode
 * @tree: pinter th head node
 * Return: always 0 or 1
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t l_d = 0, r_d = 0;
    
    if (tree == NULL)
        return (0);
    l_d = binary_tree_depth(tree->left);
    if (tree->left)
         binary_tree_depth(tree->left) + 1;
    if (tree->right)
         binary_tree_depth(tree->right) + 1;
    return (0);
   
}