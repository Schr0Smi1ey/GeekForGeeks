#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        map<int,int> mp;
        mp[arr[0]]++;
        for(int i=1;i<n;i++){
            arr[i] += arr[i-1];
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[arr[i]] >= 2 || arr[i] == 0){
                return true;
            }
        }
        return false;
    }
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}