Node* copyList(Node* head){
  //Step 1: Insert nodes in between Original nodes
  Node* node = head;
  while(node){
    Node* temp = node -> next;
    node -> next = new Node(node->data);
    node -> next -> next = temp;
    node = temp;
  }
  
  //Step 2: Copy Random Pointers
  node = head;
  while(node)
  {
    if(node->random)
      node->next->random = node -> random -> next;
    node = node -> next -> next;
  }
  
  //Step 3: Revert Position
  Node* ans = new Node(0);
  Node* helper = ans;
  
  while(head){
    helper -> next = head -> next;
    helper = helper -> next;
    
    head -> next = head -> next -> next;
    head = head -> next;
  }
  
  return ans -> next;
}
    
