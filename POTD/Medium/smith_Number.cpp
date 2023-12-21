#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int primeFactor(int n){
        int total = 0;
        while(n % 2 == 0){
            total += 2;
            n /= 2;
        }
        for(int i=3;i*i <= n;i++){
            while(n % i == 0){
                total += digitSum(i);
                n /= i;
            }
        }
        if(n > 2){
            total += digitSum(n);
        }
        return total;
    }
    bool isPrime(int n){
        if(n <= 1) return false;
        if(n <= 3) return true;
        if(n % 2 == 0 || n % 3 == 0) return false;
        for(int i=5;i*i<=n;i+=6){
            if(n % i == 0 || n % (i+2) == 0){
                return false;
            }
        }
        return true;
    }
    int digitSum(int n){
        int sum = 0;
            while(n){
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int smithNum(int n) {
        if(isPrime(n)) return 0;
        int primeSum = primeFactor(n);
        int nSum = digitSum(n);
        return primeSum == nSum ;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}