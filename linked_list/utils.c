#include "./includes/header.h"

void  push_back(t_list **head, t_list *node)
{
  if (!*head)
  {
    *head = node;
    return;
  }

  t_list *current = *head;
  while (current->next)
    current = current->next;
  current->next = node;
}

t_list *create_node(int value)
{
  t_list *new_node = malloc(sizeof(t_list));
  if (!new_node)
    return (NULL);
  new_node->val = value;
  new_node->next = NULL;
  return (new_node);
}

void  print_list(t_list *head)
{
  while (head)
  {
    printf("%d ", head->val);
    head = head->next;
  }
}
