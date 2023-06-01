#include "binary_trees.h"
/**
 * bst_search - searches for a value in a BST.
 * @tree: The BST to make the search in.
 * @value: The value to search in the BST.
 * Return: node containing the value being searched or NULL on failure.
 *
*/

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *tmp;

	if (!tree)
		return (NULL);

	tmp = (bst_t *)tree;

	while (tmp)
	{
		if (tmp->n == value)
			return (tmp);
		if (tmp->n > value)
			tmp = tmp->left;
		if (tmp->n < value)
			tmp = tmp->right;
	}
	return (NULL);
}
