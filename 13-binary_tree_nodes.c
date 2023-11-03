#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with only one child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of nodes with only one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left == NULL && tree->right != NULL) || 
			(tree->left != NULL && tree->right == NULL))
	{
		return (1 + (binary_tree_nodes(tree->left) + 
				(binary_tree_nodes(tree->right))));
	}
	return (binary_tree_nodes(tree->left) + 
			(binary_tree_nodes(tree->right)));
}
