#include "binary_trees.h"
#include "14-binary_tree_balance.c"

/**
 * checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree){

	
	int left, right;
	
	if (!tree) 
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	if (binary_tree_balance(tree) != 0)
		return (0);
	if (tree->left && tree->right)
	{
		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);

		return (left && right);
	}
	return (0);

}
