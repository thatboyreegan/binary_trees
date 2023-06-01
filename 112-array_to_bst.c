#include "binary_trees.h"
/**
 * array_to_bst - inserts values from an array to a BST.
 * @array: pointer to the first array element
 * @size: length of the array
 * Return: pointer to the root of the tree.
*/

bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 0;
	bst_t *tmp = NULL;


	if (!array)
		return (NULL);

	while (i < size)
	{
		bst_insert(&tmp, array[i]);
		i++;
	}
	return (tmp);
}
