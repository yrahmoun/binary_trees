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
