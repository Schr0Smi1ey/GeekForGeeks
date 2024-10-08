//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    bool solve(int n)
    {
        if(n==1 || n==7)
        return true;
        if(n==2 || n==3 || n==4 || n==5 || n==6 || n==8 || n==9)
        return false;
        int sq_sum = 0;
        while(n)
        {
            sq_sum+=(n%10)*(n%10);
            n/=10;
        }
        return solve(sq_sum);
    }
    int nextHappy(int n)
    {
        while(n<=1e5)
        {
            n++;
            if(solve(n))
            return n;
        }
        return 0;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends