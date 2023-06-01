#include "binary_trees.h"
/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree.
 * @tree: a binary tree
 * Return: the pointer to the root of the tree.
*/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp;

	tmp = tree;

	if (tree && tree->right)
	{
		tree = tree->right;
		tmp->right = tree->left;

		if (tree->left)
			tree->left->parent = tmp;

		tree->left = tmp;
		tree->parent = tmp->parent;
		if (tmp->parent)
		{
			if (tmp->parent->left == tmp)
				tmp->parent->left = tree;
			tmp->parent->right = tree;
		}
		tmp->parent = tree;
	}
	return (tree);
}
