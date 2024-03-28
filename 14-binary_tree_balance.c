#include "binary_trees.h"

/**
 * binary_tree_height - to calculate the heigh of tree
 * @tree: the pointer to the tree
 * Return: Height or NULL
 */
size_t binary_tree_height(const binary_tree_t * tree)
{
	size_t height_moso, height_ndyo;

	if (tree == NULL)
		return (NULL);
	height_moso = binary_tree_height(tree->left);
	height_ndyo = binary_tree_height(tree->right);
	r = (height_moso > height_ndyo ? height_moso + 1 : height_ndyo + 1);
}

/**
 * binary_tree_balance - measure the balance factor of binary tree
 * @tree: pointer to root node
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r;

	if (tree == NULL)
		return (0);
	r = (int)(binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (r)
}
