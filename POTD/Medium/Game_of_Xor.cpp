class Solution {
  public:
    int gameOfXor(int n , int arr[]) {
        map<int,int> mp;
        int k = n;
        for(int i=0;i<n;i++){
            mp[arr[i]] += ((i+1)*k);
            k--;
        }
        int ans = 0;
        for(auto x : mp){
            if(x.second & 1){
                ans ^= x.first;
            }
        }
        return ans;
    }
};