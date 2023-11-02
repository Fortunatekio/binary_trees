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
	if (!tree)
	{
		return (NULL);
	}
	bst_t *new = malloc(sizeof(bst_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	if (*tree == NULL)
	{
		*tree = new;
		return (new);
	}
	bst_t *temp = *tree;
	while (temp != NULL)
	{
		if (value < temp->n)
		{
			if (temp->left == NULL)
			{
				temp->left = new;
				break;
			}
			else
			{
				temp = temp->left;
			}
		}
		else if (value > temp->n)
		{
			if (temp->right == NULL)
			{
				temp->right = new;
				break;
			}
			else
			{
				temp = temp->right;
			}
		}
		else
		{
			free(new);
			return (NULL);
		}
	}
	return (new);
}
