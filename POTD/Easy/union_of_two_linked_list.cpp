//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
};
class Solution
{
    public:
    void make_new(struct Node *&head,struct Node *&tail,int val)
    {
        struct Node *newnode = new Node(val);
        if(head==NULL)
        {
            head = newnode;
            tail = newnode;
            return ;
        }
        tail->next = newnode;
        tail = newnode;
    }
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        struct Node *newhead = NULL;
        struct Node *newtail = NULL;
        struct Node *temp = head1;
        vector<int> arr;
        while(temp!=NULL)
        {
            arr.push_back(temp->data);
            temp = temp->next;
        }
        temp = head2;
        while(temp!=NULL)
        {
            arr.push_back(temp->data);
            temp = temp->next;
        }
        sort(arr.begin(),arr.end());
        for(auto x:arr)
        {
            make_new(newhead,newtail,x);
        }
        for(auto i=newhead;i!=NULL;i=i->next)
        {
            while(i->next!=NULL && i->data==i->next->data)
            {
                Node *deletenode = i->next;
                i->next = i->next->next;
                delete deletenode;
            }
        }
        return newhead;
    }
};



//{ Driver Code Starts.

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    Node* head = new Node(val);
    Node* tail = head;
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    return head;
}
void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n;
        Node* first = buildList(n);
        cin>>m;
        Node* second = buildList(m);
        Solution obj;
        Node* head = obj.makeUnion(first,second);
        printList(head);
    }
    return 0;
}
