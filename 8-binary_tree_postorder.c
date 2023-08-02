#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree isebenzisa post-order traversal.
 * @tree: A pointer yakwi mpande ye node ye tree to traverse.
 * @func: A pointer kwi fankshini ukubiza for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
