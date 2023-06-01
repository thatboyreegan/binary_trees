#include "binary_trees.h"

/**
 * binary_tree_leaves - finds the number of leaves in a binary tree
 * @tree: the binary
 * Return: the number of leaves in the tree
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t leaves = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
		{
			leaves += 1;
		}
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
