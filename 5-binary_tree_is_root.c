#include "binary_trees.h"


int binary_tree_is_root(const binary_tree_t *node){
    while (node){
        if (node == NULL)
            return (0);
        
        if (node->parent)
		return (0);
	else
		return (1);
    }
    return (0);
}
