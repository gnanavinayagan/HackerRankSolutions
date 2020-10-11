

// Complete the reverse function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {

    DoublyLinkedListNode* itr = head;
    DoublyLinkedListNode* tmp, *tmp2;

    while(itr!=nullptr)
    {
        tmp = itr->next;
        itr->next = itr->prev;
        itr->prev = tmp;
        tmp2=itr;
        itr = tmp;
    }
    return tmp2;

}

