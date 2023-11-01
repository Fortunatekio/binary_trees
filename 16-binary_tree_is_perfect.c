#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer
 * Return: must return 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
	{
		int left_depth = binary_tree_is_perfect(tree->left);
		int right_depth = binary_tree_is_perfect(tree->right);

		if (left_depth == right_depth)
			return (1);
	}
	return (0);
}
