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

	if (!tree->left && !tree->right)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height > r_height)
		return (l_height + 1);

	return (r_height + 1);
}
/**
 * binary_tree_is_leaf - checks if a node is a leaf node
 * @node: the node to check
 * Return: true(1) if the node is a leaf and false if otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	const binary_tree_t *leaf = node;

	if (!leaf)
		return (0);

	if ((!leaf->left) && (!leaf->right))
		return (1);
	else
		return (0);
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
		return (confirm_binary_tree_is_perfect(tree->left) &&
		confirm_binary_tree_is_perfect(tree->right));

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
/**
 * binary_tree_is_complete - checks if tree is a complete binary tree
 * @tree: a binary tree to check
 * Return: true(1) if tree is a complete or false(0) if otherwise
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;
	size_t left_height, right_height;

	if (tree)
	{
		if (binary_tree_is_leaf(tree))
			return (1);
		left = tree->left;
		right = tree->right;
		right_height = binary_tree_height(right);
		left_height = binary_tree_height(left);

		if (left_height == right_height)
		{
			if (binary_tree_is_perfect(left) && binary_tree_is_complete(right))
				return (1);
		}

		if (left_height == right_height + 1)
		{
			if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
				return (1);
		}
	}
	return (0);
}
