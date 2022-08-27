#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height of
 *
 * Return: the height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);
}


/**
 * binary_tree_is_complete - checks if a binary tree is complete
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if complete, otherwise 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	if (!tree->left)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left == right || left == (right + 1))
	{
		return (binary_tree_is_complete(tree->left) &&
		binary_tree_is_complete(tree->right));
	}
	return (0);
}
