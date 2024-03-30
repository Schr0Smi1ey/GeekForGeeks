class Solution {
  public:
    int kadane(vector<int>& arr){
        int n = arr.size();
        int max_so_far = INT_MIN,max_ending_here = 0;
        for(int i=0;i <n;i++){
            max_ending_here += arr[i];
            max_so_far = max(max_so_far,max_ending_here);
            if(max_ending_here < 0)
                max_ending_here = 0;
        }
        return max_so_far;
    }
    int maximumSumRectangle(int n, int m, vector<vector<int>> grid){

        // Naive Implementation : O(N^4)

        // int arr[n+5][m+5];
        // fill_n((int*)arr,(n+5)*(m+5),0);
        // for(int i = 1;i <= n;i++){
        //     for(int j = 1;j <= m;j++){
        //         arr[i][j] += (grid[i-1][j-1] + arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1]);
        //     }
        // }
        
        // int ans = INT_MIN;
        // for(int i = 1;i <= n;i++){
        //     for(int j = 1;j <= m;j++){
        //         int u = i,l = j;
        //         for(int p = i;p <= n;p++){
        //             for(int q = j;q <= m; q++){
        //                 int d = p,r = q;
        //                 ans = max(ans,arr[d][r] - arr[u-1][r] - arr[d][l-1] + arr[u-1][l-1]);
        //             }
        //         }
        //     }
        // }
        // return ans;
        
        

        // Optimal Implementation : O(N^3)
        
        // Column wise applying kadane

        // int ans = INT_MIN;
        // for(int i = 0;i < m;i++){
        //     vector<int> temp(n,0);
        //     for(int j = i;j < m;j++){
        //         for(int k = 0;k < n; k++){
        //             temp[k] += grid[k][j];
        //         }
        //         ans = max(ans,kadane(temp));
        //     }
        // }
        // return ans;
        
        // Row wise applying kadane 
        
        int ans = INT_MIN;
        for(int i = 0;i < n;i++){
            vector<int> temp(m,0);
            for(int j = i;j < n;j++){
                for(int k = 0;k < m;k++){
                    temp[k] += grid[j][k];
                }
                ans = max(ans,kadane(temp));
            }
        }
        return ans;
    }
};