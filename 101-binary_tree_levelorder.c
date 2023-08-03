#include <stddef.h>
#include "binary_trees.h"

/* ... (other function implementations) */

/**
 * binary_tree_levelorder - Goes through a binary tree
 * using level-order traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level = 0;

	if (tree == NULL || func == NULL)
	return;

	while (binary_tree_levelorder_rec(tree, level, func))
	level++;
}

/**
 * binary_tree_levelorder_rec - Recursively traverse a
 * binary tree level by level
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @level: Current level of the tree
 * @func: Pointer to a function to call for each node
 *
 * Return: 1 if at least one node was printed, 0 otherwise
 */
int binary_tree_levelorder_rec(
		const binary_tree_t *tree, size_t level, void (*func)(int))
{
	if (tree == NULL)
	return (0);

	if (level == 0)
	{
	func(tree->n);
	return (1);
	}

	return (binary_tree_levelorder_rec(tree->left, level - 1, func) |
		binary_tree_levelorder_rec(tree->right, level - 1, func));
}
