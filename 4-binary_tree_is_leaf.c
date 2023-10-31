#include "binary_trees.h"

/**
 * binary_tree_is_leaf - prints 0 if node it is a leaf
 * @node: pointer to the parent(const)
 * Return: returns 1
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	while (node)
	{
		if (node == NULL)
			return (0);
		if (node->right || node->left)
			return (0);
		else
			return (1);
	}
	return (1);
}
