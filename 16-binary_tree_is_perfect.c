#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to a node in the tree
 * Return: count
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->right || tree->left)
		count++;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}

/**
 * binary_tree_height - finds the height of a binary tree
 * @tree: pointer to a node of the tree
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	return (left > right ? left : right);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the binary tree
 * Return: 1 or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h_left;
	size_t h_right;
	size_t node_left;
	size_t node_right;

	if (!tree)
		return (0);
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	node_left = binary_tree_nodes(tree->left);
	node_right = binary_tree_nodes(tree->right);
	if ((h_left == h_right) && (node_left == node_right))
		return (1);
	return (0);
}

