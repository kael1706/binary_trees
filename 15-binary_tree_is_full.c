#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * Description: it's full when all the nodes
 * of the tree have no child, or all the nodes have two children.
 * in other words, each node must have 0 or 2 children.
 * @tree:  a pointer to the root node of the tree to check
 *
 * Return: 1 | 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
