#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a left child node
 * @parent: pointer to the parent node
 * @value: value of the node
 * Return: node created
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left;

	if (!parent)
		return (0);
	left = malloc(sizeof(binary_tree_t));
	if (!left)
		return (0);
	left->n = value;
	left->parent = parent;
	if (parent->left)
	{
		parent->left->parent = left;
		left->left = parent->left;
	}
	parent->left = left;
	return (left);
}
