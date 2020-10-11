

// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {

    SinglyLinkedListNode *itr = head;
    SinglyLinkedListNode *tmp;


    if(position==0)
    {
        tmp=head;
        head=head->next;
        delete tmp;
        return head;
    }

    for(int count=0; count<position-1 && itr!=nullptr; count++)
        itr=itr->next;

    tmp = itr->next;
    itr->next = itr->next->next;
    delete tmp;
    return head;

}
