

// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {

    SinglyLinkedListNode *itr = head;
    //SinglyLinkedListNode *tmp = head;

    SinglyLinkedListNode *prev=nullptr, *next=nullptr;
    while(itr!=nullptr)
    {
        next = itr->next;
        itr->next = prev;
        prev = itr;
        itr = next;
    }
    head = prev;
    return prev;

}


