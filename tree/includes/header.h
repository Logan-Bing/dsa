#ifndef header_h
#define header_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
} t_tree;

t_tree *new_node(int val);

#endif
