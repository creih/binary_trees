nclude "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: Size of the tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = binary_tree_size(tree->left);
	size_t size_right = binary_tree_size(tree->right);

	if (tree == NULL)
		return (0);
	return (size_left + size_right + 1);
}
