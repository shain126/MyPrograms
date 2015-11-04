/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    int i=0;
    struct Node* first=new Node();
    struct Node* temp= head;
    first->data=data;
    first->next=NULL;
    if (head==NULL)
    {
        return head=first;
    }
    else if (position==0)
    {
        first->next=head;
        return head=first;
    }
     while(i<position-1)
        {
            i++;
            head=head->next;
        }
        if(i==position-1 && head->next!=NULL)
        {
            first->next=head->next;
            head->next=first;
            return temp;
        }
        else if(i==position-1 && head->next==NULL)
        {
            head->next=first;
            first->next=NULL;
            return temp;
        }
        return temp;
}
