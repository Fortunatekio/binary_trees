#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a node within
 * a binary tree
 * @tree: a pointer to the node to calculate depth
 * Return: 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	for (; tree && tree->parent; depth++, tree = tree->parent)
		;
	return (depth);
}
