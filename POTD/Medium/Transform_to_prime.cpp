#include<bits/stdc++.h>
class Solution
{
    public:
    bool isPrime(int n){
        if(n <= 1) return false;
        if(n <= 3) return true;
        if(n % 2 == 0 || n % 3 == 0) return false;
        for(int i = 5; i*i <= n; i+=6){
            if(n % i == 0 || n % (i+2) == 0)
            return false;
        }
        return true;
    }
    int minNumber(int arr[],int N)
    {
        int sum = 0;
        for(int i=0;i<N;i++){
            sum += arr[i];
        }
        int i = 0;
        while(true){
            if(isPrime(sum + i))
            return i;
            i++;
        }
    }
};
