#include "binary_trees.h"
/**
 * max - find maximum value
 * @tree: the tree
 * @n: value of the node
 * Return: the maximum value
*/
int max(const binary_tree_t *tree, int n)
{
	int left, right;

	if (!tree)
		return (1);

	if (tree->n > n)
	{
		left = max(tree->left, n);
		right = max(tree->right, n);
		if (left && right)
			return (1);
	}
	return (0);
}
/**
 * min - find minimum value
 * @tree: the tree
 * @n: value of the node
 * Return: the minimum value
*/
int min(const binary_tree_t *tree, int n)
{
	int left, right;

	if (!tree)
		return (1);

	if (tree->n < n)
	{
		left = min(tree->left, n);
		right = min(tree->right, n);
		if (left && right)
			return (1);
	}
	return (0);
}
/**
 * binary_tree_is_bst - find if a binary tree is a BST.
 * @tree: a binary tree
 * Return: 1 if true and 0 otherwise
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{

	if (!tree)
		return (1);

	if (min(tree->left, tree->n) && max(tree->right, tree->n))
	{
		if (!tree->left || binary_tree_is_bst(tree->left))
		{
			if (!tree->right || binary_tree_is_bst(tree->right))
				return (1);
		}
	}

	return (0);
}
