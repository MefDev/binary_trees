#include "binary_trees.h"

/**
 * binary_tree_nodes - measure the nodes of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to traverse
 * Return: nodes or 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
	{
		return (0);
	}
	if (tree->left || tree->right)
	{
		left = binary_tree_nodes(tree->left);
		right = binary_tree_nodes(tree->right);
		return (left + right + 1);
	}
	else
	{
		return (0);
	}
}
