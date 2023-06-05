#include "binary_trees.h"
/**
 * binary_tree_height - height of a binary tree
 * @tree: a binary tree whose height is to be determined
 * Return: height of the binary tree or 0 on failure
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height > r_height)
		return (l_height + 1);
	else
		return (r_height + 1);
}
/**
 * binary_tree_balance - checks if the tree is balanced
 * @tree: binary tree
 * Return: 1 if the tree is balanced and 0 otherwise
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
