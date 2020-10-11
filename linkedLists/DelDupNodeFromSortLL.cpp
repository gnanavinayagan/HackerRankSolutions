

// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {

    SinglyLinkedListNode* itr = head;

    SinglyLinkedListNode* tmp;
    if(itr==nullptr || itr->next==nullptr)
        return head;

    while(itr->next!=nullptr)
    {
        if(itr->data == itr->next->data)
        {
            tmp = itr->next;
            itr->next=itr->next->next;
            delete tmp;
            //continue;

        }
        else
        {
        itr=itr->next;
        }
    
    }
    return head;
}

