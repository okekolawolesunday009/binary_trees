#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts an element to the right
 * @parent: pointer to the parent
 * @value: value to be passed
 * Return: retirns newnode
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	/**code**/
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;

	if (parent != NULL)
	{
		if (parent->right)
		{
			parent->right->parent = new_node;
			new_node->right = parent->right;
		}
		parent->right = new_node;
	}
	return (new_node);
}
