#include"binary_trees.h"
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
/**
 * confirm_binary_tree_is_perfect - confirms if binary tree is
 * perfect.
 * @tree: the binary tree
 * Return: true if the binary tree is perfect and false otherwise
*/
int confirm_binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);


	if (!tree->right && !tree->left)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));

	return (0);
}
/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: binary tree
 * Return: true(1) if tree is perfect and false(0) if otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (confirm_binary_tree_is_perfect(tree) == 1)
	{
		if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
			return (1);
	}
	return (0);
}
