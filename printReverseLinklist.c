/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{ if (head==NULL)
    {     cout<<head->data;
        exit(0);
   }
 Node* ptr;
 Node* ptr1;
 ptr=head;
 ptr1=head->next;
 while(ptr1->next!=NULL)
     {
     ptr++;
     ptr1++;
     ReversePrint(ptr1);
     cout<<ptr->data<<endl;
 }
}
