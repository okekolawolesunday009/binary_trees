#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value){

	binary_tree_t* new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return NULL;
	
	new_node->n = value;
	new_node->parent = parent;
	

	if (parent != NULL)
	{
		if (value <= parent->n){
            new_node->left = parent->left;
            new_node->right = NULL;
			parent->left = new_node;
		} else {
            new_node->left = NULL;
            new_node->right = parent->right;
			parent->right = new_node;
		}
	}
	return new_node;
}
