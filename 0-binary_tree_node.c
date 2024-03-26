#include "binary_trees.h"
/**
 * binary_tree_node - this functions creates a simple binary node
 * @parent: this points to the parent of the node to be created
 * @value: this is the actual value of the node this function creates
 * Return: ptr to the new node or NULL if it failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_nshya = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (node_nshya == NULL)
		return (NULL);
	node_nshya->n = value;
	node_nshya->parent = parent;
	node_nshya->left = NULL;
	node_nshya->right = NULL;
	return (node_nshya);
}
