#include "binary_trees.h"

/**
 * binary_tree_postorder - inoshandisa thru a binary_tree ne post-order traverse
 * @tree: tree_traverse
 * @func: poyinda ye fanksheni to call ye each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
