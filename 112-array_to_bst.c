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
	unsigned int b;
	bst_t *root_node = NULL;

	for (b = 0; b < size; b++)
		bst_insert(&root_node, array[b]);
	return (root_node);
}
