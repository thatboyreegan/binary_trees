#include "binary_trees.h"
/**
 * binary_tree_delete - deletes a node from the tree
 * @tree: a pointer to the root of the tree
 * Returns: always none.
*/


void binary_tree_delete(binary_tree_t *tree)
{

	binary_tree_t *lnode = tree->left;
	binary_tree_t *rnode = tree->right;

	free(tree);

	if (lnode)
		binary_tree_delete(lnode);

	if (rnode)
		binary_tree_delete(rnode);
}
