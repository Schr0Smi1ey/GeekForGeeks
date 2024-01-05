class Solution
{
    public:
    int first(int *arr,int n,int target){
        int low = 0,high = n,ans = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] == target){
                ans = mid;
            }
            if(arr[mid] >= target){
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
    int last(int *arr,int n,int target){
        int low = 0,high = n,ans = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] == target){
                ans = mid;
                low = mid + 1;
            }
            else if(arr[mid] > target){
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
    vector<int> find(int arr[], int n , int x )
    {
        return {first(arr,n,x),last(arr,n,x)};
    }
};