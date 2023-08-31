#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checking if tree is perfect
 * @tree: tree to check
 * Return: 0 if not perfect, 1 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);
	{
		count = perfect(tree);
		if (count != 0)
			return (1);
	return (0);
	}
}

/**
 * perfect - to know if tree is perfect
 * @tree: tree to check
 * Return: 0 if not perfect, length or 1 otherwise
 *
 */
int perfect(const binary_tree_t *tree)
{
	int height = 0, length = 0;

	if (tree->left && tree->right)
	{
		height = 1 + perfect(tree->left);
		length = 1 + perfect(tree->right);
		if ((length == height) && (length != 0) && (height != 0))
			return (length);
		return (0);
	}
	else if (!(tree->left) && !(tree->right))
		return (1);
	else
		return (0);
}
