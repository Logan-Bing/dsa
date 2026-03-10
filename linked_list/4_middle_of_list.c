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

int main() {
  t_list *head = NULL;
  t_list *node;
  for (int i = 1; i < 5; i++){
    node = create_node(i);
    push_back(&head, node);
  }

  t_list *middle = middleNode(head);
  print_list(middle);
}
