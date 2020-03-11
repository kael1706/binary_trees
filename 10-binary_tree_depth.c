#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * Description: depth is the distance between the chosen node and the
 * root node. So the depth between a root node and its first child is 1.
 * @tree: a pointer to the node to measure the depth
 *
 * Return: depth | 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		++d;
		tree = tree->parent;
	}

	return (d);
}
