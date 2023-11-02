#include "binary_trees.h"

/**
 * binary_tree_is_root - Check for root
 *
 * @node: the tree to check
 * Return: if leaf return 1 otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	int isRoot;

	isRoot = (node->parent == NULL);
	if (!node)
	{
		return (0);
	}

	return (isRoot);




}
