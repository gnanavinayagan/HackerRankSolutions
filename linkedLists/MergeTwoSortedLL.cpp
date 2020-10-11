

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode* itr1 = head1, *itr2=head2, *itr3, *head3;

    if(itr1==nullptr)
        return head2;
    if(itr2==nullptr)
        return head1;
    
    if(itr1->data < itr2->data)
    {
        head3=itr1;
        itr1=itr1->next;
    }
    else
    {
        head3=itr2;
        itr2=itr2->next;
    }
    itr3=head3;

    while(itr1!=nullptr && itr2!=nullptr)
    {   
            if(itr1->data < itr2->data)
            {
                itr3->next = itr1;
                itr1=itr1->next;
            }
            else
            {
                itr3->next=itr2;
                itr2=itr2->next;
            }
            itr3=itr3->next;
    }
    if(itr1!=nullptr)
    {
        itr3->next=itr1;
    }
    if(itr2!=nullptr)
    {
        itr3->next=itr2;
    }

    return head3;

}

