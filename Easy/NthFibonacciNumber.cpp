class Solution {
  public:
    int nthFibonacci(int n){
        int arr[n], mod = 1e9 + 7;
        arr[0] = 1,arr[1] = 1;
        for(int i=2;i<n;i++){
            arr[i] = (arr[i-1] + arr[i-2]) % mod;
            arr[i] %= mod;
        }
        return arr[n-1] % mod;
    }
};