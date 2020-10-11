

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode* itr1=head1;
    SinglyLinkedListNode* itr2=head2;

    while(itr1 != itr2)
    {
        if(itr1->next==nullptr)
            itr1=head2;
        else
            itr1=itr1->next;

        if(itr2->next==nullptr)
            itr2=head1;
        else
            itr2=itr2->next;
    }
    return itr1->data;



}
