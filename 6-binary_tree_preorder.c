#include "binary_trees.h"

/**
 * binary_tree_preorder - prints the element inpreorder traversal
 * @tree: pinter the head node
 * @func: function pointer int
 * Return: always print result
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree || func == NULL)
		return
			func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
