#include "binary_trees.h"

/**
 * binary_tree_leaves - prints the leave node count
 * @tree: pointer to head
 * Return: always 1
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leaves =  binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left);
	return (leaves);
}
