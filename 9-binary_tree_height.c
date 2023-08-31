#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: height of binary tree
 * If tree is NULL, your function must return 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_value = 0;
	size_t right_value = 0;

	if (!tree)
		return (0);

	left_value = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right_value = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (left_value > right_value ? left_value : right_value);
}
