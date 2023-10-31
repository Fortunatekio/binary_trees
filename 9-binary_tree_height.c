#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_height - a function that calculates the height
 * of binary tree
 * @tree: a pointer to the root node of the binary tree
 * for which you want to determine the height
 * Return: the height or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);
	{
		return (1 + MAX(left_height, right_height));
	}
}
