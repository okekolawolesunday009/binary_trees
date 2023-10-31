#include "binary_trees.h"

/**
 * binary_tree_is_leaf - prints 0 if node it is a leaf
 * @tree: pointer to the parent(const)
 * 
 * Return: returns 1
*/

int binary_tree_is_leaf(const binary_tree_t *node){
        /**code**/
        while (node)
        {
                if (node == NULL)
                        return (0);
                if (node->right || node->left)
                        return (0);
                else
                        return (1);
        }
    return (1);
}
