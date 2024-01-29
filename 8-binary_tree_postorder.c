#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through the tree using post-order traversal
 * @tree: root of the tree
 * @func: prints the value
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
