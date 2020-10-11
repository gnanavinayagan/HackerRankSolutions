// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */


void printLinkedList(SinglyLinkedListNode* head) {

    SinglyLinkedListNode* itr = head;
    while(itr!=nullptr)
    {
        cout<<itr->data<<endl;
        itr=itr->next;
    }
}
