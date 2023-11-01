#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of
 * a given node in a binary tree
 * @node: a pointer
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	return (node->parent == node->parent->parent->left ?
			node->parent->parent->right : node->parent->parent->left);
}
