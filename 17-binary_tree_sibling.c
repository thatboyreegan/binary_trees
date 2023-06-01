#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node in the tree
 * @node: node whose sibling is to be found.
 * Return: pointer to the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent)
	{
		if (node == node->parent->left)
			return (node->parent->right);

		if (node == node->parent->right)
			return (node->parent->left);
		else
			return (NULL);
	}

	return (NULL);
}
