#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_nshya = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);
	if (node_nshya == NULL)
		return (NULL);
	node_nshya->n = value;
	node_nshya->parent = parent;
	node_nshya->left = NULL;
	node_nshya->right = NULL;
	if (parent->right != NULL)
	{
		node_nshya->right = parent->right;
		node_nshya->right->parent = node_nshya;
	}
	parent->right = node_nshya;
	free(node_nshya)
	return (parent->right);
}
