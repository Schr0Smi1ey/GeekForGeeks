class Solution{
    public:    
    long long int maxSumWithK(long long int arr[], long long int n, long long int k) 
    {
        long long int sum = 0;
        for(int i=0;i<k;i++){
            sum += arr[i];
        }
        long long int ans = sum, p = sum;
        for(int i=k;i<n;i++){
            sum = sum + arr[i] - arr[i-k];
            p = max(p + arr[i],sum);
            ans = max(ans,p);
        }
        return ans;
    }
};