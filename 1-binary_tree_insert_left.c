#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {

	binary_tree_t *left_child;

	if (!parent) {
		return (NULL);
	}

	left_child = malloc(sizeof(binary_tree_t));

	if (!left_child) {
		return (NULL);
	}

	left_child->n = value;
	left_child->parent = parent;
	left_child->left = NULL;
	left_child->right = NULL;

	if (parent->left == NULL) {
		parent->left = left_child;
	}
	else {
		left_child->left = parent->left;
		parent->left->parent = left_child;
		parent->left = left_child;

	}
	return (left_child);

}

