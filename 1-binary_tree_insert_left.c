#include "binary_trees.h"
/**
 * binary_tree_insert_left - is t insert a node to left of parent node
 * @parent: point to the node the left child goes in
 * @value: as the name suggests is value of left child
 * Return: the pointer to left child or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child_moso = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	binary_tree_t *temp_child = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		temp_child = parent->left;
		parent->left = child_moso;
		child_moso->n = value;
		child_moso->left = temp_child;
		child_moso->right = NULL;
		return (parent->left);
	}
	parent->left = child_moso;
	parent->right = NULL;
	child_moso->n = value;
	free(temp_child);
	return(parent->left);
}
