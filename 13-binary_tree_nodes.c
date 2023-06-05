#include "binary_trees.h"

/**
 * binary_tree_nodes - finds the number of nodes in a binary tree
 * @tree: the binary tree
 * Return: the number of nodes in a tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	if (tree)
	{
		if (tree->left || tree->right)
			nodes++;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
