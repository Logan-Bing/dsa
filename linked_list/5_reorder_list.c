#include "./includes/header.h"

struct ListNode *find_middle(struct ListNode *head)
{
  struct ListNode *fast = head;
  struct ListNode *slow = head;

  while (fast && fast->next)
  {
    fast = fast->next->next;
    slow = slow->next;
  }
  return (slow);
}

struct ListNode *reverse_list(struct ListNode *head)
{
  t_list *new_head = NULL;
  t_list *tmp_next;

  while (head)
  {
    tmp_next = head->next;
    head->next = new_head;
    new_head = head;
    head = tmp_next;
  }
  return (new_head);
}

void reorderList(struct ListNode* head)
{
  t_list *middle_node = find_middle(head);
  t_list *tmp_first;
  t_list *tmp_second;
  t_list *first_part = head;
  t_list *second_part;
  second_part = reverse_list(middle_node->next);
  middle_node->next = NULL;
  while (first_part && second_part)
  {
    tmp_first = first_part->next;
    tmp_second = second_part->next;
    first_part->next = second_part;
    second_part->next = tmp_first;
    first_part = tmp_first;
    second_part = tmp_second;
  }
}

int main(){
  t_list *head = NULL;
  t_list *node;
  for (int i = 1; i < 6; i++){
    node = create_node(i);
    push_back(&head, node);
  }
  reorderList(head);
  print_list(head);
}

