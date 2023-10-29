class Solution{
  public:
    long long int search(long long int x){
        long long int low = 1,high = x,ans;
        while(low <= high){
            long long int mid = low + (high-low)/2;
            if(mid*mid <= x){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
    long long int floorSqrt(long long int x) 
    {
        return search(x);
    }
};