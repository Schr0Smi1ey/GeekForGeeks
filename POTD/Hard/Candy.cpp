class Solution {
  public:
    int minCandy(int n, vector<int> &ratings) {
        int arr[n];
        fill(arr,arr+n,1);
        for(int i=1;i<n;i++){
            if(ratings[i] > ratings[i-1]){
                arr[i] += arr[i-1];
            }
        }
        for(int i=n-2;i >= 0;i--){
            if(ratings[i] > ratings[i+1] && arr[i] <= arr[i+1]){
                arr[i] = (arr[i+1] + 1);
            }
        }
        int total = 0;
        for(int i=0;i<n;i++){
            total += arr[i];
        }
        return total;
    }
};