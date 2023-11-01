#include "binary_trees.h"

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree || func == NULL)
        return;
   
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);  
    func(tree->n);
}