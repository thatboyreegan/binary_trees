#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: the parent node
 * @value: the value of the node
 * Return: pointer to the new node or NULL incase of failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp, *r_node;

	if (!parent)
		return (NULL);

	tmp = parent->right;
	r_node = binary_tree_node(parent, value);

	if (!r_node)
		return (NULL);

	if (tmp)
	{
		r_node->right = tmp;
		tmp->parent = r_node;
	}

	parent->right = r_node;

	return (r_node);
}
