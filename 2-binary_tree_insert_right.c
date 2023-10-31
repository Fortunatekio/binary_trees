#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the
 * right-child of another node
 * @parent: a parent to the node to which you want to insert new
 * right child
 * @value: an integer representing the value you want store
 * in the new node
 * Return: NULL on failure or new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
