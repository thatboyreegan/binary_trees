#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is a root of a tree
 * @node: node to check
 * Return: true(1) if the node is a root pr false(0) otherwise
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	const binary_tree_t *root = node;

	if (!root)
		return (0);

	if (!root->parent)
		return (1);
	else
		return (0);
}
