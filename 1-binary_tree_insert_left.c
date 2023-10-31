#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node
 * as the left-child of another node
 * @parent: a pointer to the node to which you want to insert
 * new left child
 * @value: an integer representing the value you want to
 * store in the new node
 * Return: a pointer to the created node, or NULL on
 * failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (!new_node)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
