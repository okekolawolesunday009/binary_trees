#include "binary_trees.h"
/**
 * binary_tree_preorder - prints the dtree in postorder traversal
 * @tree: pinter th head node
 * @func: function pointer int
 * Return: always print result
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree || func == NULL)
        return;
   
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);  
    func(tree->n);
}