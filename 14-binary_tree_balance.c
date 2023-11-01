#include "binary_trees.h"

/**
 * binary_tree_height_b - calculates height
 * @tree: pointer
 * Return: height
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left_h = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			right_h = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((left_h > right_h) ? left_h : right_h);
	}
}
/**
 * binary_tree_balance - calculates the balance factor
 * of a binary tree
 * @tree: a pointer
 * Return: return 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
