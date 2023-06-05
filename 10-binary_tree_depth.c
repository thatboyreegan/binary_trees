#include "binary_trees.h"
/**
 * binary_tree_depth - finds the depth of a binary tree
 * @tree: the binary tree
 * Return: size of the tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = -1;

	if (!tree)
		return (0);

	while (tree)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
