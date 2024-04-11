#include "binary_trees.h"

/**
 * Inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, value) {

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

