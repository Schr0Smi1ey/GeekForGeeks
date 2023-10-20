//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int search(string pat, string txt) {
	    int fre[26] = {0};
	    for(int i=0;i<pat.size();i++){
	        fre[pat[i] - 'a']++;
	    }
	    int k = pat.size() , cnt  = 0 , j = 0;
	    vector<int> temp(26,0);
	    for(int i=0;i<txt.size();i++){
	        bool flag = true;
	        temp[txt[i] - 'a']++;
	        if(i >= k-1){
	            for(int i=0;i<26;i++){
	                if(temp[i] != fre[i]){
	                    flag = false;
	                    break;
	                }
	            }
	            if(flag){
	                cnt++;
	            }
	            temp[txt[j++] - 'a']--;
	        }
	    }
	    return cnt;
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}