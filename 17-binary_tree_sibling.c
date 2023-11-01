#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of
 * a given node in a binary tree
 * @node: a pointer to the node
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
