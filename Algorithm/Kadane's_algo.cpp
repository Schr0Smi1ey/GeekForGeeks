class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        long long sumMax = arr[0],sumEnding = arr[0];
        for(int i=1;i<n;i++){
            sumEnding = max((long long)arr[i],sumEnding+(long long)arr[i]);
            sumMax = max(sumMax,sumEnding);
        }
        return sumMax;
    }
};