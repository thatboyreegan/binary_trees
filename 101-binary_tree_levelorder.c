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
/**
 * validate_binary_tree_levelorder -validates the level order of a tree.
 * @tree: a binary tree
 * @level: level of a node
 * @func: function to apply to a value
 * Return: none.
*/
void validate_binary_tree_levelorder(const binary_tree_t *tree,
size_t level, void (*func)(int))
{
	if (!tree)
		return;

	if (level == 1)
		func(tree->n);
	else
	{
		validate_binary_tree_levelorder(tree->left, level - 1, func);
		validate_binary_tree_levelorder(tree->right, level - 1, func);
	}
}
/**
 * binary_tree_levelorder - traverse using the levelorder method
 * @tree: binary tree to traverse
 * @func: function to apply to each value in the tree
 * Return: None.
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t i, height;

	if (!tree || !func)
		return;

	height = binary_tree_height(tree);
	for (i = 0; i <= height; i++)
		validate_binary_tree_levelorder(tree, i, func);
}
