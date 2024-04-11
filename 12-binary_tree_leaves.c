#include "binary_trees.h"

/**
 * counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: 0 
 */

size_t binary_tree_leaves(const binary_tree_t *tree) {

	if (!tree) 
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));

}
