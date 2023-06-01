#include "binary_trees.h"
/**
 * binary_tree_height - height of a binary tree
 * @tree: a binary tree whose height is to be determined
 * Return: height of the binary tree or 0 on failure
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	size_t l_height = binary_tree_height(tree->left);
	size_t r_height = binary_tree_height(tree->right);

	if (l_height > r_height)
		return (l_height + 1);

	return (r_height + 1);
}
