#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to a node in the tree
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	count += binary_tree_leaves(tree->right);
	count += binary_tree_leaves(tree->left);
	return (count);
}
