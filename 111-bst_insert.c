#include "binary_trees.h"
/**
 * bst_insert - inserts a node into a BST.
 * @tree: double pointer to the root of the tree
 * @value: key of the node to search with in the BST.
 * Return: pointer to the node or NULL on failure.
*/

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp;

	if (!tree)
		return (NULL);
	if (*tree == NULL)
	{
		*tree = (bst_t *)binary_tree_node(NULL, value);
		return (*tree);
	}
	tmp = *tree;
	while (tmp)
	{
		if (tmp->n == value)
			break;
		if (tmp->n > value)
		{
			if (!tmp->left)
			{
				tmp->left = (bst_t *)binary_tree_node(tmp, value);
				return (tmp->left);
			}
			tmp = tmp->left;
		}
		else if (tmp->n < value)
		{
			if (!tmp->right)
			{
				tmp->right = (bst_t *)binary_tree_node(tmp, value);
				return (tmp->right);
			}
			tmp = tmp->right;
		}
	}
	return (NULL);
}
