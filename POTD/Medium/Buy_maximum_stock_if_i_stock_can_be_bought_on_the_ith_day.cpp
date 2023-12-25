class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            v[i] = make_pair(price[i],i+1);
        }
        sort(v.begin(),v.end(),[](const auto &x,const auto&y){
            if(x.first < y.first) return true;
            else if(x.first == y.first && x.second > y.second) return true;
            return false;
        });
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(k > ((v[i].second)*(v[i].first))){
                cnt += v[i].second;
                k -= ((v[i].first) * (v[i].second));
            }
            else{
                int x = (k/v[i].first);
                cnt += x;
                k -= (x*v[i].first);
            }
        }
        return cnt;
    }
};
