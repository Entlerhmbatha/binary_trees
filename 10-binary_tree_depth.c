#include "binary_trees.h"

/**
 * binary_tree_depth - ikala idepth ye node kwi binary tree.
 * @tree: A pointer yakwinode ukukala idepth.
 *
 * Return: If tree is NULL, ifunkshini yakho mayibuyise 0, kungenjalo mayibuyise idepth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
