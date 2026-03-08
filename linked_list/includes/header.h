#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct ListNode {
  int val;
  struct ListNode *next;
} t_list;

// utils.c
void  push_back(t_list **head, t_list *node);
t_list *create_node(int value);
void  print_list(t_list *head);

#endif
