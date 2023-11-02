#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check for leaf
 *
 * @node: the tree to check
 * Return: if leaf return 1 otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	binary_tree_is_leaf(node->left);
	binary_tree_is_leaf(node->right);
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}




}
