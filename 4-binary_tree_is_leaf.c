#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node){
	/**code**/
	while (node)
	{
		if (node == NULL)
			return (0);
		if (node->right || node->left)
		    return (0);
	}
    return (1);
}
