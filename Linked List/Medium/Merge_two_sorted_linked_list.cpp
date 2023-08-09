/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
void insert(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node *head = NULL,*tail =  NULL;
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data < head2->data)
        {
            insert(head, tail , head1->data);
            head1 = head1->next;
        }
        else
        {
            insert(head, tail , head2->data);
            head2 = head2->next;            
        }
    }
    while(head1!=NULL)
    {
        insert(head, tail , head1->data);
        head1 = head1->next;
    }
    while(head2!=NULL)
    {
        insert(head, tail , head2->data);
        head2 = head2->next;            
    }
    return head;
}  