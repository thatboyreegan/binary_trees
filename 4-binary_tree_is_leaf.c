#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: the node to check
 * Return: 1 if true and 0 if false
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
