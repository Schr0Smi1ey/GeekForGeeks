#include <bits/stdc++.h>
using namespace std;
long long int countStr(long long int n);
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << countStr(n) << endl;
    }
return 0;
}
long long int countStr(long long int n){
    long long int ans = 1; //(all 'a')
    ans += (2*n); // ('b' && all other 'a' , 'c' && all other 'a')
    ans += (n*(n-1)); // ("bc" && all other 'a')
    ans += (n*(n-1))/2; // ("bcc" && all other 'a')
    ans += (n*(n-1)*(n-2))/2; // ("cc" && all other 'a')
    return ans;
}

// Number of distinct permutation : 
// (n!/n1!*n2!...) where n1, n2 is the frequency of element occurs