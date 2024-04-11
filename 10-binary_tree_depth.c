#include "binary_trees.h"

/**
 * measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 0 on success
 */

size_t binary_tree_depth(const binary_tree_t *node) {

	int i;

	for (i =0; node && node->parent; ++i)
		node = node->parent;
	return (i);
}
