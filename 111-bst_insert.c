#include "binary_trees.h"

/**
 * bst_insert - a function that inserts a value into
 * a binary search tree
 * @tree: double pointer to the root node of the bst
 * @value: value you want to insert into bst
 * Return: the BST tree
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node, *tmp;
	binary_tree_t *a;

	if (!tree)
		return (NULL);
	if (*tree == NULL)
	{
		a = binary_tree_node((binary_tree_t *)(*tree), value);
		new_node = (bst_t *)a;
		*tree = new_node;
	}
	else
	{
		tmp = *tree;
		if (value < tmp->n)
		{
			if (tmp->left)
				new_node = bst_insert(&tmp->left, value);
			else
			{
				a = binary_tree_node((binary_tree_t *)tmp, value);
				new_node = tmp->left = (bst_t *)a;
			}
		}
		else if (value > tmp->n)
		{
			if (tmp->right)
				new_node = bst_insert(&tmp->right, value);
			else
			{
				a = binary_tree_node((binary_tree_t *)tmp, value);
				new_node = tmp->right = a;
			}
		}
		else
			return (NULL);
	}
	return (new_node);
}
