#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right, r;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	r = (height_left > height_right ? height_left : height_right);
	return (r + 1);
}
