#include "binary_trees.h"

/**
 * binary_tree_rotate_right - a function that performs a right
 * rotation on a binary tree
 * @tree: root node
 * Return: pointer node to the new node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *k;

	if (!tree || tree->left == NULL)
		return (NULL);
	k = tree->left;
	tree->left = k->right;
	if (k->right != NULL)
	{
		k->right->parent = tree;
	}
	k->right = tree;
	k->parent = tree->parent;
	tree->parent = k;

	return (k);
}
