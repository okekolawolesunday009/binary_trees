#include "binary_trees.h"

/**
 * binary_tree_size - prints the size f the tree
 *@tree: pointer to node
 *Return: return size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (NULL);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	size =  binary_tree_size(tree->right) + 1 + binary_tree_size(tree->left);
	return (size);
	}
}
