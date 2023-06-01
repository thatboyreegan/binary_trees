#include "binary_trees.h"
/**
 * binary_tree_preorder - traverse a tree using the preorder method.
 * @tree: the tree to traverse
 * @func: function to apply to each value of the tree
 * Return: None
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func)
	{
		;
	}

	if (tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
