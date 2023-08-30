#include "binary_trees.h"
/**
 * binary_tree_postorder - traversing
 * the tree using postorder
 * @tree: the tree to traverse
 * @func: pointer to function where the value will be passed to
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
