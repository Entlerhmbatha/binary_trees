#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts nod yedu
 * @parent: umzali ku the nod
 * @value: ivalu to store_the new_nod
 * Return: Poynda ku newly created nod
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
