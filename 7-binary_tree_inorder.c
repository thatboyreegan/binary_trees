#include "binary_trees.h"
/**
 * binary_tree_inorder - traverses a tree using the inorder method.
 * @tree: tree to traverse
 * @func: function to apply to each value in the tree
 * Return: None
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((!tree) || (func != NULL))
	{
		;
	}

	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
