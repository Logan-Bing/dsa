#include "includes/header.h"

// ITERATIVE VERSION
struct ListNode *reverseList(struct ListNode* head)
{
  t_list *tmp_prev = NULL;
  t_list *tmp_next;
  
  if (!head)
    return (NULL);
  while (head)
  {
    tmp_next = head->next;
    head->next = tmp_prev;
    tmp_prev = head;
    head = tmp_next;
  }
  return (tmp_prev);
}

// RECURSIVE VERSION
struct ListNode *reverseListRecursif(struct ListNode *head)
{
  if (!head || !head->next)
    return (head);
  
  struct ListNode *new_head = reverseListRecursif(head->next);
  head->next->next = head;
  head->next = NULL;
  return (new_head);
}
