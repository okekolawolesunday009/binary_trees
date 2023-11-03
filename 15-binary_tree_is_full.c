#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if it is balance
 * @tree: pinter t head node
 * Return: always 0 or 1
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left == NULL && tree->right) || 
			(tree->left && tree->right == NULL))
		return (0);
	return	(binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));
}
