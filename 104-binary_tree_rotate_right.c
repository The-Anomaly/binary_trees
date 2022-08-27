#include "binary_trees.h"

/**
 * binary_tree_rotate_right - perform right-rotation on a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: pointer to the new root node after rotation
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);
	tree->parent = tree->left;
	if (tree->left)
	{
		tree->left = tree->left->right;
		tree->parent->right = tree;
		tree->parent->parent = NULL;
		if (tree->left)
			tree->left->parent = tree;
		return (tree->parent);
	}
	return (tree);
}
