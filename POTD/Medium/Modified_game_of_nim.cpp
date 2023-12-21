#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int findWinner(int n, int arr[]){
        unordered_map<int,int> mp;
        int a = 0;
        for(int i=0;i<n;i++){
            a ^= arr[i];
        }
        if(a == 0){
            return 1;
        }
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int even = 0,odd = 0;
        for(auto x : mp){
            if((x.second & 1)){
                odd++;
            }
        }
        if(odd % 2 == 0) return 1;
        else return 2;
        // int a = 0;
        // for(int i=0;i<n;i++){
        //     a ^= arr[i];
        // }
        // if(a == 0){
        //     return 1;
        // }
        // return (n&1)?2:1;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i = 0;i < n;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.findWinner(n, A)<<"\n";
    }
    return 0;
}