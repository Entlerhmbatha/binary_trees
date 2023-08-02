#include "binary_trees.h"

/**
 * binary_tree_is_root - bhekisisa if a node ayina root
 * @node: nod ukuthi i check
 *
 * Return: 1 if nod ine root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
