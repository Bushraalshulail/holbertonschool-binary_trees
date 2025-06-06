#include "binary_trees.h"

/**
* binary_tree_is_root - Checks if a given node is a root
*
* @node: Pointer to the node to check
*
* Return: 1 if the node is a root, 0 otherwise
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);

/* A node is a root if it has no parent */
if (node->parent == NULL)
return (1);

return (0);
}
