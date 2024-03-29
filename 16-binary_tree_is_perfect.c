#include  "binary_trees.h"

/**
 * binary_tree_heigh - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_heigh(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);
	height_left = binary_tree_heigh(tree->left);
	height_right = binary_tree_heigh(tree->right);
	return (height_left > height_right ? height_left + 1 : height_right + 1);
}

/**
 * binary_tree_count_nodes - Counts the number of nodes in a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Number of nodes in the tree, 0 if tree is NULL
 */
size_t binary_tree_count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_count_nodes(tree->left) + binary_tree_count_nodes(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, nodes_last_level, total_nodes;

	if (tree == NULL)
		return (0);
	height = binary_tree_heigh(tree);
	nodes_last_level = binary_tree_count_nodes(tree->left) == binary_tree_count_nodes(tree->right);
	total_nodes = (1 << height) - 1;
	return (nodes_last_level && total_nodes == binary_tree_count_nodes(tree));
}
