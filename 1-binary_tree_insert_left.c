#include "binary_trees.h"
/**
 * binary_tree_insert_left - is t insert a node to left of parent node
 * @parent: point to the node the left child goes in
 * @value: as the name suggests is value of left child
 * Return: the pointer to left child or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child_moso = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);
	child_moso->parent = parent;
	child_moso->n = value;
	child_moso->left = NULL;
	child_moso->right = NULL;
	if (parent->left != NULL)
	{
		child_moso->left = parent->left;
		child_moso->left->parent = child_moso;
	}
	parent->left = child_moso;
	return(child_moso);
}
