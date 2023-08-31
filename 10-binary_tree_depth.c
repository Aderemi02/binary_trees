#include "binary_trees.h"
/**
 * binary_tree_depth - depth of a tree
 * @tree: the tree to find its depth
 * Return: 0 if tree is NULL, result otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t num;
	binary_tree_t *binNode;

	binNode = NULL;
	if (tree == NULL)
	{
		return (0);
	}

	binNode = tree->parent;
	for (num = 0; binNode != NULL; num++)
	{
		binNode = binNode->parent;
	}
	return (num);
}
