//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}
int longestSubstrDistinctChars (string s)
{
   int i = 0, j = 0,ans = 1;
   int fre[26] = {0};
   while(i < s.size()){
       fre[s[i] - 'a']++;
       while(fre[s[i] - 'a'] > 1){
           fre[s[j++] - 'a']--;
       }
       ans = max(ans, i-j+1);
       i++;
   }
   return ans;
}