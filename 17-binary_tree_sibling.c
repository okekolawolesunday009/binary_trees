#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a tree
 * @tree: pointer to the tree to find the sibling
 * Return: sibling tree
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *tree)
{
	char *nil = "nil";

	if (!tree || !(tree->parent))
		return (NULL);
	if (tree->parent && tree->parent->left != tree)
		return (tree->parent->left);
	else if (tree->parent && tree->parent->right != tree)
		return (tree->parent->right);
	return (nil);
}
