#include "./includes/header.h"
#include <stdbool.h>

bool hasCycle(struct ListNode *head)
{
  if (!head)
    return (false);

  struct ListNode *fast = head;
  struct ListNode *slow = head;
  while (fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
      return (true);
  }
  return (false);
}

int main()
{
  t_list *head = NULL;
  t_list *n_1 = create_node(1);

  push_back(&head, n_1);
  printf("%d", hasCycle(head));
}
