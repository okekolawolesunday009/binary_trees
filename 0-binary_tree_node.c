#include "binary_trees.h"

/**
 * binary_tree_node - creates abinary tree node
 * @parent: pointer to the parent
 * @value: value to be passed
 * 
 * 
 * Return: retirns newnode
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {

	binary_tree_t* new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return NULL;
	
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent != NULL)
	{
		if (value <= parent->n){
			parent->left = new_node;
		} else {
			parent->right = new_node;
		}
	}
	return new_node;
}
