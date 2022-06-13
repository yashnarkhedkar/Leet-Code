struct Node* reverseList(struct Node *head)
{
    Node<int>* prev = NULL;
    Node<int>* curr = head;
    Node<int>* forward = NULL;

    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}
