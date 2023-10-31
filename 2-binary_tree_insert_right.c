#include "binary_trees.h"


/**
 * binary_tree_insert_left - Insert a new right node
 *
 * @parent: the parent node
 * @value: the values to be inserted
 *
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newrightNode;

	newrightNode = malloc(sizeof(binary_tree_t));
	newrightNode = binary_tree_node(parent, value);
	if (!parent->right)
	{
		parent->right = newrightNode;
	}
	else
	{
		parent->right->parent = newrightNode;
		newrightNode->right = parent->right;
		parent->right = newrightNode;
	}
	return (newrightNode);
}
