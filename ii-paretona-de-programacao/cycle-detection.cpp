bool has_cycle(SinglyLinkedListNode* head) {
  if(head==NULL)return 0;
  SinglyLinkedListNode *slow_ptr=head, *fast_ptr=head;
  while(slow_ptr and fast_ptr and fast_ptr->next and slow_ptr->next){
    slow_ptr = slow_ptr->next;
    fast_ptr = fast_ptr->next->next;
    if(slow_ptr==fast_ptr)return 1;
  }
  return 0;
}
