class Solution{
  public:
    int order(int a[],int n,int target){
        int low = 0,high = n-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(a[mid] <= target){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
        return low;
    }
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
        vector<int> ans;
        sort(arr2,arr2+n);
        for(int i=0;i<m;i++){
            ans.push_back(order(arr2,n,arr1[i]));
        }
        return ans;
    }
};