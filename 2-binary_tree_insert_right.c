#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a right child node
 * @parent: pointer to the parent node
 * @value: value of the node
 * Return: node created
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (0);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (0);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->right)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	parent->right = node;
	return (node);
}
