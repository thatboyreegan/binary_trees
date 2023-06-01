#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses a tree using the postorder method.
 * @tree: tree to traverse
 * @func: function to apply to each value in the tree
 * Return: None
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((!tree) || (func != NULL))
	{
		;
	}

	if (tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
