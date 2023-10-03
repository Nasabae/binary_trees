#include "binary_trees.h"

/**
* binary_tree_node - Create a binary tree node.
*
* @parent: A pointer to the parent of the node.
* @value: The value to be put in the new node.
*
* Return: If it fails - NULL else - a pointer to the new node.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *neww;

neww = malloc(sizeof(binary_tree_t));
if (neww == NULL)
return (NULL);

neww->n = value;
neww->parent = parent;
neww->left = NULL;
neww->right = NULL;

return (neww);
}
