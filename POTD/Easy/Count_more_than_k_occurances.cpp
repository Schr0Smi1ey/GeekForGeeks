class Solution
{
    public:
    int countOccurence(int arr[], int n, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int cnt = 0;
        for(auto x : mp){
            if(x.second > ((n)/k)){
                cnt++;
            }
        }
        return cnt;
    }
};