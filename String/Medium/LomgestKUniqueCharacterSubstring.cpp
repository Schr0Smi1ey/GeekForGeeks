#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int fre[26] = {0};
        int i = 0 , j = 0 ,ans =-1, unique = 0;
        while(i < s.size()){
            fre[s[i] - 'a']++;
            if(fre[s[i] - 'a'] == 1){
                unique++;
            }
            while(unique > k){
                fre[s[j] - 'a']--;
                if(fre[s[j] - 'a'] == 0){
                    unique--;
                }
                j++;
            }
            if(unique == k){
                ans = max(ans, i-j+1);
            }
            i++;
        }
        return ans;
    }
};.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}