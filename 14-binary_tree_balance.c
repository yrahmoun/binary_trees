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
	else
		return (1);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	else
		return (1);
	return (left > right ? left : right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;
	int balance;

	if (!tree)
		return (0);
	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);
	balance = left_height - right_height;
	return (balance);
}
