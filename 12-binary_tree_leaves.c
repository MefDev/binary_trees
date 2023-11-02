#include "binary_trees.h"

/**
 * binary_tree_leaves - measure the leaves of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to traverse
 * Return: size or 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}
