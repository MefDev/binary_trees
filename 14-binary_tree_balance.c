#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to traverse
 * Return: nodes or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
	{
		return (0);
	}
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}
