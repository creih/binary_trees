#include "binary_trees.h"
/**
 * binary_tree_is_leaf - binary tree check if node is a leaf
 * @node: the node to check
 * Return: 1 or 0 dependin on the check
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	if (node->parent == NULL)
		return (0);
	else
		return (1);
}
