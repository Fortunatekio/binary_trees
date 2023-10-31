#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the number
 * of leaf nodes in a binary tree
 * @tree: a pointer to the root node of the binary
 * tree
 * Return: return 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	return (tree->left == NULL && tree->right == NULL ? 1 : binary_tree_leaves
			(tree->left) + binary_tree_leaves(tree->right));
}
