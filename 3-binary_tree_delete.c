#include "binary_trees.h"

/**
 * binary_tree_delete - a function that deletes an entire binary tree
 * @tree: the tree to free
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}
}
