#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count leaves
 * Return: Number of leaves in the tree, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_moso;
	size_t leaves_ndyo;

	if (tree == NULL)
		return (0);
	leaves_moso = binary_tree_leaves(tree->left);
	leaves_ndyo = binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (leaves_moso + leaves_ndyo);
}
