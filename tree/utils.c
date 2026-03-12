#include "./includes/header.h"

t_tree *new_node(int val)
{
  t_tree *node = malloc(sizeof(t_tree));
  if (!node)
    return (NULL);
  node->val = val;
  node->left = NULL;
  node->right= NULL;
  return (node);
}

