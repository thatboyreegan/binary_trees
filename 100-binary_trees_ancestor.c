#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds if two nodes share a least common ancestor
 * @first: the first node
 * @second: the second node
 * Return: the least common acestore of the two nodes or NULL.
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	const binary_tree_t *tmp_second;

	if (!first || !second)
		return (NULL);

	tmp_second = (binary_tree_t *)second;

	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = tmp_second;
		first = first->parent;
	}
	return (NULL);
}
