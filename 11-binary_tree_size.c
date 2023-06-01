#include "binary_trees.h"
/**
 * binary_tree_size - finds the size of a binary tree
 * @tree: the binary tree
 * Return: the size of the binary tree or 0 incase of failure
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
		return (size);
	}
	else
		return (0);
}
