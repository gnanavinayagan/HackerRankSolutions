

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {

    SinglyLinkedListNode* newnode = new SinglyLinkedListNode(data);

    if(llist==nullptr)
    {
        llist = newnode;
        return llist;
    }

    newnode->next=llist;
    llist=newnode;
    return llist;
}
