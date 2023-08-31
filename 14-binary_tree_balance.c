#include "binary_trees.h"
/**
 * binary_tree_balance - balancing the tree
 * @tree: tree to be checked for balanced factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal_fact = 0, left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	height(tree->left, 1, &left);
	height(tree->right, 1, &right);
	bal_fact = (left - right);
	return (bal_fact);
}

/**
 * height - finding the height of the left and right tree
 * @tree: the tree to check the height
 * @num: default height of the tree
 * @h: pointer to the max height
 */
void height(const binary_tree_t *tree, int num, int *h)
{
	if (tree == NULL)
		return;

	if ((tree->left == NULL) && (tree->right == NULL))
	{
		if (num > *h)
			*h = num;
	}
	else
	{
		height(tree->left, (num + 1), h);
		height(tree->right, (num + 1), h);
	}
}
