#include "binary_trees.h"

/**
 * bst_search - ukusesha kwi binary search tree.
 * @tree: A pointer kwi root node of the BST ukusesha.
 * @value: ivelu yokusesha for in the BST.
 *
 * Return: If the tree is NULL or the value is not found, NULL.
 *         Otherwise, a pointer to the node containing the value.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
