#include "binary_trees.h"

/**
 * binary_tree_size - ukula isiyizi we binary tree.
 * @tree: A pointer kwi root node ye tree ukula the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
