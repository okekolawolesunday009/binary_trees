#include "binary_trees.h"

/**
 * binary_tree_inorder - prints the element in inorder traversal
 * @tree: pinter th head node
 * @func: function pointer int
 * Return: always print result
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
