#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: nodes count of at least 1 child
 * tree is NULL, the function must return 0
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		node += 1;
	}
	node += binary_tree_nodes(tree->left);
	node += binary_tree_nodes(tree->right);

	return (node);
}
