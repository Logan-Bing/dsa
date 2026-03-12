#include "includes/header.h"

int max(int a, int b)
{
  return a > b ? a : b;
}

int maxDepth(struct TreeNode* root)
{
  if (!root)
    return (0);
  return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

int main()
{
  t_tree *root = new_node(3);
  root->left = new_node(9);
  root->right = new_node(20);
  root->right->right = new_node(7);
  root->right->left = new_node(15);

  printf("%d\n", maxDepth(root));
}
