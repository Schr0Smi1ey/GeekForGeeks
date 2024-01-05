class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        sort(arr,arr+N);
        for(int i=0;i<N;){
            if(i < N - 2 && arr[i] == arr[i+2]){
                i += 3;
            }
            else
            return arr[i];
        }
        return -1;
    }
};