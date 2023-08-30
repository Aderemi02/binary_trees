#include "binary_trees.h"
/**
 * binary_tree_preorder - traversing
 * the tree using preorder
 * @tree: the tree to traverse
 * @func: pointer to function where the value will be passed to
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
