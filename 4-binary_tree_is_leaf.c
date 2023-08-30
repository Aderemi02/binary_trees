#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checking if the node is a leaf node
 * @node: node to check
 * Return: 1 if leaf node, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if ((node->left == NULL) && (node->right == NULL))
			return (1);
	}
	return (0);
}
