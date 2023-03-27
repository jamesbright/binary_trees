#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * Description: If parent already has a left-child, the new node takes
 * its place and the old left-child is set as the left-child of the
 * new node node
 *
 * @parent: parent node
 * @value: value to insert at node
 * Return: NULL on error, otherwise return a pointer to created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (parent == NULL)
	return (NULL);

new = binary_tree_node(parent, value);
if (new == NULL)
	return (NULL);

if (parent->left != NULL)
{
new->left = parent->left;
parent->left->parent = new;
}
parent->left = new;
return (new);
}
