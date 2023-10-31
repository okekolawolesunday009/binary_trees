#include "binary_trees.h"

/**
 * binary_tree__delete - deletes all element in a tree
 * @tree: pointer to the parent(const)
 * Return: returns newnode
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
