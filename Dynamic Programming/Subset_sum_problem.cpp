class Solution{   
public: 
    vector<vector<int>> dp;
    bool findx(int n,vector<int>arr,int sum)
    {
        if(n==0){
            if(sum == 0)
            return true;
            else return false;
        }
        if(dp[n][sum] != -1)
        return dp[n][sum];
        if(arr[n-1] <= sum){
            return dp[n][sum] = (findx(n-1, arr, sum-arr[n-1]) || findx(n-1, arr, sum));
        }
        else
        return dp[n][sum] = findx(n-1,arr,sum);
    }
    bool isSubsetSum(vector<int>arr, int sum){
        dp.resize(arr.size()+1,vector<int>(sum+1,-1));
        return findx(arr.size(),arr,sum);
    }
};

