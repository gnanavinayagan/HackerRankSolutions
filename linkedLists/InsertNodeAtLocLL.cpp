

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {

    int count=0;
    SinglyLinkedListNode *newnode = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *itr=head;

    for(; count<position-1 &&  itr!=nullptr; count++)
    {
        itr=itr->next;
    }
    newnode->next=itr->next;
    itr->next=newnode;

    return head;
}
