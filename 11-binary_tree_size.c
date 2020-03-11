#include "binary_trees.h"

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
