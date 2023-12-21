/* The Node is defined 
  /* Link list Node
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/

/*The function below returns an int denoting
the length of the longest palindrome list. */
#include<bits/stdc++.h>
vector<int> v;
int len(int low,int high)
{
    while(low>=0 && high<=(v.size()-1) && v[low]==v[high])
    {
        low--;high++;
    }
    return high-low-1;
}
int maxPalindrome(Node *head)
{
    //Your code here
    v.clear();
    while(head!=NULL)
    {
        v.push_back(head->data);
        head = head->next;
    }
    int ans = INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        int len1 = len(i,i);
        int len2 = len(i,i+1);
        int temp = max(len1,len2);
        if(temp>ans)
        {
            ans = temp;
        }
    }
    return ans;
}


#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int len(int low,int high)
{
    while(low>=0 && high<=(v.size()-1) && v[low]==v[high])
    {
        low--;high++;
    }
    cout<<"Low : "<<low<<"High : "<<high<<"len : "<<high-low-1<<endl;
    return high-low-1;
}
int maxPalindrome()
{
    int ans = INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        int len1 = len(i,i);
        int len2 = len(i,i+1);
        int temp = max(len1,len2);
        if(temp>ans)
        {
            ans = temp;
            /*
             calculating the subarray range : 
                starting_index = i - (temp-1)/2;

                subarray_length = [i,i+ans] ;
            */
        }
    }
    return ans;
}
signed main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    cout<<maxPalindrome()<<endl;
}