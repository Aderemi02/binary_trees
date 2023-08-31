#include "binary_trees.h"
/**
 * binary_tree_leaves - cal number of leaves in tree
 * @tree: tree to check the number of leaves
 * Return: number of leaves, 0 otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num = 0;

	counting_leaf(tree, &num);
	return (num);
}

/**
 * counting_leaf - this counts the leaf node
 * @tree: the tree with the leaf node
 * @num: counter
 */
void counting_leaf(const binary_tree_t *tree, size_t *num)
{
	if (tree == NULL)
	{
		return;
	}

	if ((tree->left == NULL) && (tree->right == NULL))
	{
		if (num != NULL)
			(*num)++;
	}
	else
	{
		counting_leaf(tree->left, num);
		counting_leaf(tree->right, num);
	}
}
