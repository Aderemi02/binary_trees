#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if
 * a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_value = 0;
	int right_value = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		left_value = binary_tree_is_full(tree->left);
		right_value = binary_tree_is_full(tree->right);

		if (left_value == 0 || right_value == 0)
			return (0);
		return (1);
	}

	return (0);
}
