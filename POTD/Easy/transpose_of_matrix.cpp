#include <bits/stdc++.h> 
using namespace std; 
class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            vector<int> temp(n);
            for(int j=0;j<n;j++)
            {
                temp[j] = matrix[j][i];
            }
            ans.push_back(temp);
        }
        matrix = ans;
    }
    /* with space complexity : O(1)
        void transpose(vector<vector<int> >& matrix, int n)
        { 
            vector<vector<int>> ans;
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    */
};
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n,vector<int>(n)); 
        for(int i=0; i<n; i++)
        {
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }
        Solution ob;
        ob.transpose(matrix,n);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}