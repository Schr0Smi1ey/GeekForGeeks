int longestSubarrayWithSumK(vector<int> a, long long k) 
{
    long long sum = 0;
    int i =0,j=0 , ans = -1;
    while(i<a.size()){
        sum += a[i++];
        while(sum > k){
            sum -= a[j++];
        }
        if(sum == k){
            ans = max(ans,i-j);
        }
    } 
    return ans;
}