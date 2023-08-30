#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserting
 * new node to the right of the parent node
 * @parent: pointer to the parent node
 * @value: value of the node
 * Return: the binary tree with the right node inserted, NULL otherwise
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *Bin_tree_node = NULL;

	if (parent != NULL)
	{
		Bin_tree_node = malloc(sizeof(binary_tree_t));
		if (Bin_tree_node != NULL)
		{
			Bin_tree_node->parent = parent;
			Bin_tree_node->left = NULL;
			Bin_tree_node->right = parent->right;
			Bin_tree_node->n = value;
			if (parent->right != NULL)
			{
				parent->right->parent = Bin_tree_node;
			}
			parent->right = Bin_tree_node;
		}
	}
	return (Bin_tree_node);

}
