#include "binary_trees.h"
/**
 * binary_tree_height - Measure the height of a binary tree
 *
 * @tree: Pointer to the root of the tree
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}


/**
 * binary_tree_node_count - Count the number of nodes in a binary tree
 *
 * @tree: Pointer to the root of the tree
 * Return: Number of nodes in the tree
 */
int binary_tree_node_count(const binary_tree_t *tree)
{
	int left_count, right_count;

	if (tree == NULL)
		return (0);
	left_count = binary_tree_node_count(tree->left);
	right_count = binary_tree_node_count(tree->left);
	return (1 + left_count + right_count);
}

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 *
 * @tree: Pointer to the root of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, expected_nodes, node_count;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	expected_nodes = (1 << height) - 1;
	node_count = binary_tree_node_count(tree);

	return (expected_nodes == node_count);
}

