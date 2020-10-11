

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode* itr = head;

    if(head==nullptr)
    {
        head = new SinglyLinkedListNode(data);
        return head;
    }    

    while(itr->next!=nullptr)
        itr=itr->next;
    
    SinglyLinkedListNode *newnode = new SinglyLinkedListNode(data);
    itr->next= newnode;
    newnode->next=nullptr;

    return head;
}


