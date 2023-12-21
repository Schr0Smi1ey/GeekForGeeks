//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}


// } Driver Code Ends
/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    void insert(Node *&head,Node *&tail,int val)
    {
        Node *newnode = new Node(val);
        if(head==NULL)
        {
            head = newnode;
            tail = newnode ;
            return ;
        }
        tail->next = newnode;
        tail = newnode;
    }
    Node * removeDuplicates( Node *head) 
    {
        Node *temp = head;
        vector<int> v;
        set<int> st;
        while(temp!=NULL)
        {
            if(st.insert(temp->data).second)
            v.push_back(temp->data);
            temp = temp->next;
        }
        Node *newhead =  NULL,*newtail = NULL;
        for(auto x:v)
        {
            insert(newhead,newtail,x);
        }
        return newhead;
    }
};


//{ Driver Code Starts.

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}
// } Driver Code Ends