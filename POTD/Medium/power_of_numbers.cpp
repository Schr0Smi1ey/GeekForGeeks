class Solution{
    public:
    //You need to complete this fucntion
    long long mod = 1e9+7;
    long long power(int N,int R)
    {
       if(R==1)
       return N;
       if(R==0)
       return 1;
       long long val = power(N,R/2); // break R until it don't become 1 or 0
       val = (val*val)%mod; 
       if(R&1) // for odd
       val = (val*N)%mod;
       return val;
    }

};

/*
    Even power of a number can be formed by mutiplication of that number's half power with itself.
( a^6 = a^3 * a^3 )
 

Odd power of a number can be formed by multiplication of that number's half power with itself and then with that number.
( a^7 = a^3 * a^3 * a)
*/