#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary
 * tree is full or a perfect binary tree
 * @tree: a pointer to the root node of the binary tree that
 * you want to check for being full
 * Return: 0 if NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (!tree->left && !tree->right) && binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
}
