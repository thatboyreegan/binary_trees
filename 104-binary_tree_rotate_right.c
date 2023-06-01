#include "binary_trees.h"
/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree.
 * @tree: a binary tree
 * Return: the pointer to the root of the tree.
*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp;

	tmp = tree;

	if (tree && tree->left)
	{
		tree = tree->left;
		tmp->left = tree->right;

		if (tree->right)
			tree->right->parent = tmp;

		tree->right = tmp;
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
