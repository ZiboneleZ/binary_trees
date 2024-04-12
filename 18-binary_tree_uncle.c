#include "binary_trees.h"

/**
 * finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node) {

	binary_tree_t *parent;

	if (!node || !node->parent){
		return (NULL);
	}

	parent = node->parent;

	if (parent->parent && parent->parent->left != parent)
		return (parent->parent->left);
	else if (parent->parent && parent->parent->right != parent)
		return (parent->parent->right);
	return (NULL);

}
