#include "binary_trees.h"
/**
 * binary_tree_uncle -  finds the uncle of a node
 *
 * @node:  is a pointer to the node to find the sibling
 * Return: nodes or 0
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	grandparent = node->parent->parent;
	if (!grandparent)
	{
		return (NULL);
	}
	if (!node || !node->parent)
	{
		return (NULL);
	}


	if (grandparent->left == node->parent)
	{
		return (grandparent->right);
	}
	else
	{
		return (grandparent->left);
	}

}
