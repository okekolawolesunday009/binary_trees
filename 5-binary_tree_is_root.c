#include "binary_trees.h"

/**
 * binary_tree_is_root - prints 0 if node is a parent
 * @node: pointer to the parent(const)
 * Return: returns 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	while (node)
	{
		if (node == NULL)
			return (0);
		if (node->parent)
			return (0);
		else
			return (1);
	}
	return (0);
}
