#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: height of the tree, otherwise 0
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;


	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((left > right ? left : right) + 1);
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: 0 if tree is NULL, otherwise balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
