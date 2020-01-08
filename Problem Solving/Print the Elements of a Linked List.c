

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
     int data;
     SinglyLinkedListNode* next;
     while(head!=0)
     {
         printf("%d\n", *head);
         head=head->next;
     }
}

