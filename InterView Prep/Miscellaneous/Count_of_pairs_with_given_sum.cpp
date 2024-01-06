class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int ans = 0;
        for(int i = 0;i<n;i++){
            int need = k - arr[i];
            if(need == arr[i]){
                ans += mp[arr[i]] - 1;
            }
            else{
                ans += mp[need];
            }
            mp[arr[i]]--;
        }
        return ans;
    }
};