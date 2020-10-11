

// Complete the sortedInsert function below.

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
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

    DoublyLinkedListNode* itr = head;

    DoublyLinkedListNode* newnode = new DoublyLinkedListNode(data);

    if(head==nullptr)
        return newnode;
    if(head->data>data)
    {
        newnode->next=head;
        head->prev = newnode;
        head = newnode;
        return head;
    }

    for(;itr->next!=nullptr && itr->next->data < data ;itr=itr->next);
    // loop fails - itr pointing last element
    // next node data > data
    if(itr->next == nullptr)
    {
        newnode->prev=itr;
        newnode->next=nullptr;
        itr->next=newnode;
        return head;
    }

    newnode->next = itr->next;
    newnode->prev = itr;
    itr->next->prev=newnode;
    itr->next=newnode;
    return head;

}

