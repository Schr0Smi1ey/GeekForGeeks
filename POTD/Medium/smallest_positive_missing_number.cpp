//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        sort(arr,arr+n);
        // for(int i=0;i<n;i++)
        // cout<<arr[i]<<" ";
        int k = 1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0 || arr[i]==0)
            continue;
            if(arr[i]!=k)
            return k;
            else 
            {
                while(arr[i]==k)
                {
                    if(arr[i+1]==k)
                    i++;
                    else break;
                }
                k++;
            }
        }
        return k;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends