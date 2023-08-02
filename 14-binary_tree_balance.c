#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the height of.
 *
 * Return: Height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(tree)
	binary_tree_t *tree;
{
	if (!tree)
	return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return ((left_height > right_height) ? left_height + 1 : right_height + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: Balance factor of the tree. If tree is NULL, return 0.
 */
int binary_tree_balance(tree)
	binary_tree_t *tree;
{
	if (!tree)
	return (0);

	int left_height = (int)binary_tree_height(tree->left);
	int right_height = (int)binary_tree_height(tree->right);

	return (left_height - right_height);
}
