#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least one child in a binary tree
 * @tree: Pointer to the root node of the tree to count nodes
 * Return: Number of nodes with at least one child, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int r;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		r = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (r);
	}
	else
		return (0);
}
