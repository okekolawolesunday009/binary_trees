#include "binary_trees.h"

/**
 * binary_tree_depth - prints the dept of anode
 * @tree: pinter th head node
 * Return: always 0 or 1
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d_d = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
	{
		d_d = binary_tree_depth(tree->parent) + 1;
	} else
		d_d = 0;
	return (d_d);
}
