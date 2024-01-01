class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n =  nums.size();
        for(int i=0;i<n;i++){
            nums[i] %= k;
        }
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        if(mp.find(0) != mp.end()){
            if(mp[0] % 2) return false;
        }
        int i = 1,j = k - 1;
        while(i <= j){
            if(i == j){
                if(mp[i] % 2) return false;
            }
            if(mp[i] != mp[j]) return false;
            i++;j--;
        }
        return true;
    }
};