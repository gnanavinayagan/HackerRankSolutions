

// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode* head, int positionFromTail) {

    auto itr = head;
    SinglyLinkedListNode *pos;

    for(int count=0;count<positionFromTail;count++)
        itr=itr->next;
    for(pos=head; itr->next!=nullptr; itr=itr->next,pos=pos->next);

    return pos->data;

}
