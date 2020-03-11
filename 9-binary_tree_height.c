#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * Description: height is the distance from the chosen node
 * to the most distant child node. So the distance between
 * a node and its first child would be 1.
 * @tree: a pointer to the root node of the
 * tree to measure the height.
 *
 * Return: height | 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_l, h_r;

	if (tree == NULL)
		return (0);

	if (tree->left)
		h_l = 1 + binary_tree_height(tree->left);
	else
		h_l = 0;

	h_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (h_l > h_r)
		return (h_l);
	else
		return (h_r);
}
