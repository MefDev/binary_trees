#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to traverse
 * Return: depth or 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (tree->parent)
	{
		return (binary_tree_depth(tree->parent) + 1);
	}
	else
	{
		return (0);
	}


}
