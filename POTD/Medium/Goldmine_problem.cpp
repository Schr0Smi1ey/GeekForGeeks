#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<vector<int>> grid;
    int n,m;
    int dp[501][501];
    int drow[3] = {-1,0,1};
    int dcol[3] = {1,1,1};
    bool ok(int i,int j){
        return (i >= 0 && i < n && j >= 0 && j < m);
    }
    int calc(int i,int j){
        if(!ok(i,j)) return 0;
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int maxima = INT_MIN;
        for(int k=0;k<3;k++){
            maxima = max(maxima,calc(i+drow[k],j+dcol[k]));
        }
        return dp[i][j] = grid[i][j] + maxima;
    }
    int maxGold(int mn, int mm, vector<vector<int>> arr)
    {
        fill_n((int *)dp,501*501,-1);
        grid = arr;n = mn,m = mm;
        int maxima = INT_MIN;
        for(int i=0;i<n;i++){
            maxima = max(maxima,calc(i,0));
        }
        return maxima;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}