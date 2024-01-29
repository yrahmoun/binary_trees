#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of a node in a binary tree
 * @tree: point to a node on the tree
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		count = 1 + binary_tree_depth(tree->parent);
	return (count);
}
