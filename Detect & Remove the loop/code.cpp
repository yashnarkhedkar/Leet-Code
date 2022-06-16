Node* floydDetectCycle(Node* &head){
//     if(head == NULL){
//         return NULL;
//     }
    Node* slow = head;
    Node* fast = head;
    
    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* &head){
    
    Node* intersection = floydDetectCycle(head);
    if(intersection == NULL){
        return NULL;
    }
    Node* slow = head;
    
    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
    
}

Node* solve(Node* &head){
    if(head == NULL){
        return head;
    }
    Node* startingNode = getStartingNode(head);
    if(startingNode == NULL){
        return head;
    }
    Node* temp = startingNode;
    
    while(temp -> next != startingNode){
        temp = temp -> next;
    }
    
    temp -> next = NULL;
    return head;
}

Node *removeLoop(Node *head)
{
    return solve(head);
    
}
