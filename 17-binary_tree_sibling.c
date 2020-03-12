#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node | NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *l_child = NULL;
	binary_tree_t *r_child = NULL;

	if (node && node->parent)
	{
		if (node->parent->left == NULL || node->parent->right == NULL)
			return (NULL);

		l_child = node->parent->left;
		r_child = node->parent->right;

		if (l_child && l_child != node)
			return (l_child);
		else if (r_child && r_child != node)
			return (r_child);
	}

	return (NULL);
}
