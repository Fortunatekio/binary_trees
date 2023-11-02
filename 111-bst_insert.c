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
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	if (value < (*tree)->n)
		return (bst_insert(&((*tree)->left), value));
	if (value > (*tree)->n)
		return (bst_insert(&((*tree)->right), value));

	return (NULL);
}
