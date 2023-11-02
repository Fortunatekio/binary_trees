#include "binary_trees.h"

/**
 * array_to_bst - this function constructs a binary search
 * tree from an array of integers
 * @array: pointer to the first element
 * @size: size of array
 * Return: a pointer to the root node of the created BST
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root_node = NULL;

	if (size == 0) 
	{
		return (NULL);
	}
	for (size_t i = 0; i < size; i++) 
	{
		bst_insert(&root_node, array[i]);
	}
	return (root_node);
}
