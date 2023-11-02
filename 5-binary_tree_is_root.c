#include "binary_trees.h"

/**
 * binary_tree_is_root - Check for root
 *
 * @node: the tree to check
 * Return: if root return 1 otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	int isRoot;

	if (!node)
	{
		return (0);
	}
	isRoot = (node->parent == NULL);
	return (isRoot);
}
