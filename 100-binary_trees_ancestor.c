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

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes.
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor node of the two given nodes,
 * or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	size_t d1, d2;

	if (first == NULL || second == NULL)
		return (NULL);

	d1 = binary_tree_depth(first);
	d2 = binary_tree_depth(second);

	for (; d1 > d2; --d1)
		first = first->parent;
	for (; d2 > d1; --d2)
		second = second->parent;

	while (1)
	{
		if (first == second)
			return ((binary_tree_t *)first);

		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}
