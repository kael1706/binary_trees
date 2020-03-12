#include "binary_trees.h"

/**
 * binary_tree_uncle - a pointer to the node to find the uncle.
 * @node: a pointer to the node to find the uncle.
 *
 * Return: a pointer to the uncle node | NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *l_child = NULL;
	binary_tree_t *r_child = NULL;

	if (node && node->parent && node->parent->parent)
	{
		if (node->parent->parent->left == NULL ||
			node->parent->parent->right == NULL)
			return (NULL);

		l_child = node->parent->parent->left;
		r_child = node->parent->parent->right;

		if (l_child != node->parent)
			return (l_child);
		else if (r_child != node->parent)
			return (r_child);
	}

	return (NULL);
}
