#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        int i=0,ans = 0;
        int sum = 0;
        map<int,int> mp;
        while(i<n){
            sum += a[i];
            
            if(sum == k){
                ans = max(ans, i+1);
            }
            if(mp.count(sum - k)){
                ans = max(ans,i-mp[sum-k]);
            }
            if(mp.count(sum) == 0){
                mp[sum] = i;
            }
            i++;
        }
        return ans;
    } 

};
int main() {
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	}
	return 0;
}