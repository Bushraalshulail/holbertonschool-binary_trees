#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_insert_right - Inserts a node as the right-child of another node
*
* @parent: Pointer to the parent node
* @value: Value to store in the new node
*
* Return: Pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
return (NULL);

/* Allocate memory for the new node */
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);

/* Initialize the new node */
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = parent->right;

/* If parent already has a right-child, reassign its parent */
if (parent->right != NULL)
parent->right->parent = new_node;

/* Set the new node as the right-child of the parent */
parent->right = new_node;

return (new_node);
}
