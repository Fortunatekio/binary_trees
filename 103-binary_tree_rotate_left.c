#include "binary_trees.h"

/**
 * binary_tree_rotate_left - a function that performs a left
 * notationon a binary tree
 * @tree: a pointer
 * Return: a pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *p = tree->right;

	if (!tree || !tree->right)
	{
		return (NULL);
	}

	tree->right = p->left;
	if (p->left)
	{
		p->left->parent = tree;
	}
	p->left = tree;
	p->parent = tree->parent;
	tree->parent = p;

	return (p);
}
