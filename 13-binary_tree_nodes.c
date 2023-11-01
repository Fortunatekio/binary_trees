#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the number of nodes
 * in a binary tree
 * @tree: a pointer to the root node of the binary tree
 * Return: return 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((tree->left || tree->right) + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
