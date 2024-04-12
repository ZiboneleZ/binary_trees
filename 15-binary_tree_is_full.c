#include "binary_trees.h"

/**
 * checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0
 */

int binary_tree_is_full(const binary_tree_t *tree){

	if (!tree) 
		return (0);

	if (tree->left && tree->right)
	{
		if (binary_tree_is_full(tree->right) != 1)
			return (0);
		if (binary_tree_is_full(tree->left) != 1)
			return (0);
	}

	return ((tree->right && !tree->left) || (!tree->left && tree->right) ? 0 : 1);
}
