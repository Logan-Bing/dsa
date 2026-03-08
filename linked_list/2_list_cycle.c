#include "./includes/header.h"

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
