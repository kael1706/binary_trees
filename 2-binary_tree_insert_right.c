#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: address of the root or other node
 * @value: value of the new node
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_n;

	if (parent == NULL)
		return (NULL);


	n_n = binary_tree_node(parent, value);

	if (parent->right)
	{
		n_n->right = parent->right;
		n_n->right->parent = n_n;
	}

	parent->right = n_n;

	return (n_n);
}
