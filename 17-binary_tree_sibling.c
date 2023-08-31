#include "binary_trees.h"

/**
 * binary_tree_sibling - binary_tree_sibling
 * @node: a pointer to the node to find the sibling
 * Return:  pointer to the uncle node
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
