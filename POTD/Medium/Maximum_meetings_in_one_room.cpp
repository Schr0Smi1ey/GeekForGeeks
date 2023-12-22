class Solution{
public:
    vector<int> maxMeetings(int n,vector<int> &s,vector<int> &f){
        vector<pair<pair<int,int>,int>> v(n);
        for(int i=0;i<n;i++){
            v[i].first.first = f[i];
            v[i].first.second = s[i];
            v[i].second = i+1;
        }
        sort(v.begin(),v.end(),[](const auto &x,const auto &y){
            return (x.first.first < y.first.first);
        });
        vector<int> ans;
        int end = -1;
        for(int i=0;i<n;i++){
            int start = v[i].first.second;
            if(start > end){
                ans.push_back(v[i].second);
                end = v[i].first.first;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};