#include "./includes/header.h"

struct ListNode* middleNode(struct ListNode* head)
{
  if (!head)
    return (NULL);
  t_list *fast = head;
  t_list *slow = head;
  while (fast && fast->next){
    fast = fast->next->next;
    slow = slow->next;
  }
  return (slow);
}
