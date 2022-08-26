#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the siblings of a node
 *
 * @node: pointer to the node
 *
 * Return: pointer to the sibling node, NULL if none
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
