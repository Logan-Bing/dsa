#include "./includes/header.h"

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
  if (!head || n < 1)
    return (NULL);

  int i = 0;
  t_list dummy;
  dummy.next = head;
  t_list *to_free;
  t_list *tmp = &dummy;
  t_list *fast = &dummy;
  while (fast->next)
  {
    if (i >= n)
      tmp = tmp->next;
    fast = fast->next;
    i++;
  }
  if (i < n)
    return (head);
  to_free = tmp->next;
  tmp->next = to_free->next;
  free(to_free);
  return (dummy.next);
}

