#include "binary_trees.h"
/**
 * binary_tree_node - creating a new node.
 * @parent: pointer to the parent node.
 * @value: value to be stored in node.
 * Return: new node creared if success else NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *Bin_tree_node = NULL;

	Bin_tree_node = malloc(sizeof(binary_tree_t));

	if (Bin_tree_node != NULL)
	{
		Bin_tree_node->parent = parent;
		Bin_tree_node->left = NULL;
		Bin_tree_node->right = NULL;
		Bin_tree_node->n = value;
	}
	return (Bin_tree_node);
}
