#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: the parent node
 * @value: the value of the node
 * Return: pointer to the left-child or NULL incase of failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp, *l_node;

	if (!parent)
		return (NULL);

	tmp = parent->left;
	l_node = binary_tree_node(parent, value);

	if (!l_node)
		return (NULL);

	if (tmp)
	{
		l_node->left = tmp;
		tmp->parent = l_node;
	}

	parent->left = l_node;

	return (l_node);
}
