#include "binary_trees.h"

/**
 * binary_tree_size - function that calculates the size of
 * a binary tree
 * @tree: a pointer to the root node of the binary
 * tree
 * Return: 0 if the tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (tree ? binary_tree_size(tree->left) + binary_tree_size
			(tree->right) + 1 : 0);
}
