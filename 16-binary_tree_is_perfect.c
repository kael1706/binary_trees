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

/**
 * binary_tree_size - measures the size of a binary tree.
 * Description: the size is a number of all(direct and indirect)
 * child nodes including the parent node.
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: size | 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		return (
			1 +
			binary_tree_size(tree->left) +
			binary_tree_size(tree->right)
			);
	}
	else
	{
		return (0);
	}

}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * Description: it's perfect when you have all your sheets
 * at the same level.
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: 1 | 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int s, h, max_n;

	if (tree == NULL)
		return (0);

	s = binary_tree_size(tree);
	h = binary_tree_height(tree);

	/*
	* maximum number of nodes with height.
	* (2 << h) - 1 == (2 * 2^h) - 1
	*/
	max_n = (2 << h) - 1;

	return (s == max_n);
}
