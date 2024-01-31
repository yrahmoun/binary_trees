#include "binary_trees.h"

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
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the tree
 * Return: 1 or 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left - right == 0)
		return (1);
	return (0);
}
