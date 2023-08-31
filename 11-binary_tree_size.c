#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: size of a binary tree
 * If tree is NULL, your function must return 0
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_value = 0;
	size_t right_value = 0;

	if (!tree)
		return (0);

	left_value = binary_tree_size(tree->left);
	right_value = binary_tree_size(tree->right);

	return (left_value + right_value + 1);
}
