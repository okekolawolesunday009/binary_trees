#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts an element to the right
 * @parent: pointer to the parent
 * @value: value to be passed
 * 
 * 
 * Return: retirns newnode
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value){

	binary_tree_t* new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return NULL;
	
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL; 
	new_node->right = NULL;

	

	if (parent != NULL)
	{
		if (parent->left){
			parent->left->parent = new_node;
			new_node->left = parent->left;
		}
		parent->left = new_node;

	}
	return (new_node);
}
