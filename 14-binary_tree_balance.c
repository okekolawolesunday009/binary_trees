#include "binary_trees.h"

/**
 * binary_tree_balance - checks if it is balance
 * @tree: pinter t head node
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    int lh, rh;
    lh = binary_tree_height(tree->left);
    rh = binary_tree_height(tree->right);
    if (tree == NULL)
        return (0);
    if (lh == NULL && rh == NULL)
        return (1);
    else if (abs(lh - rh) <= 1 &&  binary_tree_balance(tree->left)
        &&  binary_tree_balance(tree->right))
        return 1;
}
