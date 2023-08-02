#include "binary_trees.h"

/**
 * binary_tree_node - yenza  ibinary tree nod
 * @parent: poyinda 2 kumzali we nod ye nod ezokhandwa
 * @value: ivelu yokufakwa kwi new_nod
 *
 * Return: Poyinda 2 inod eyenziwe manje
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
