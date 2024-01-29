#include "binary_trees.h"

/**
 * binary_tree_size - finds the size of a binary tree
 * @tree: pointer to a node on the tree
 * Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left += binary_tree_size(tree->left);
	if (tree->right)
		right += binary_tree_size(tree->right);
	return (left + right + 1);
}
