#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node in the tree
 * @node: node whose uncle is to be found.
 * Return: pointer to the uncle node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent)
	{
		if (node->parent == node->parent->parent->left)
			return (node->parent->parent->right);

		if (node->parent == node->parent->parent->right)
			return (node->parent->parent->left);
		else
			return (NULL);
	}

	return (NULL);
}
