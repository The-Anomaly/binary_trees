#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child
 * of another node
 *
 * @parent: pointer to the node to insert the left child n
 * @value: value to store in the new node
 *
 * Return: pointer to the created node or NULL or failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return (NULL);


	node->parent = parent;
	node->n = value;
	node->right = NULL;

	if (parent->left)
	{
		node->left = parent->left;
		node->left->parent = node;
	}
		parent->left = node;
	return (node);
}
