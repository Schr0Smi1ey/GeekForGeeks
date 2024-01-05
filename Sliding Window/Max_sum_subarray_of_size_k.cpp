class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        long long sum = 0,ans = INT_MIN,l = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(i >= k-1){
                ans = max(sum,ans);
                sum -= arr[l++];
            }
        }
        return ans;
    }
};
