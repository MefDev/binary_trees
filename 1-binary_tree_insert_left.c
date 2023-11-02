#include "binary_trees.h"


/**
 * binary_tree_insert_left - Insert a new left node
 *
 * @parent: the parent node
 * @value: the values to be inserted
 *
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newLeftNode;

	if (!parent)
	{
		return (NULL);
	}
	newLeftNode = malloc(sizeof(binary_tree_t));
	if (!newLeftNode)
	{
		return (NULL);
	}
	newLeftNode = binary_tree_node(parent, value);
	if (!parent->left)
	{
		parent->left = newLeftNode;
	}
	else
	{
		parent->left->parent = newLeftNode;
		newLeftNode->left = parent->left;
		parent->left = newLeftNode;
	}
	return (newLeftNode);
}
