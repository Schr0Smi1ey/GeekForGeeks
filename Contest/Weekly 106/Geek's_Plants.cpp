class Solution{
  public:
  int gcd(int a,int b){
        if(a==0)
        return b;
        return gcd(b%a,a);
    }
    long long minimumBuckets(int N, vector<int> &arr) {
        int divisor = arr[0];
        long long sum = 0;
        for(int i=1;i<N;i++)
        {
            divisor =gcd(divisor,arr[i]);
        }
        for(int i=0;i<N;i++)
        {
            sum+=(arr[i]/divisor);
        }
        return sum;
    }
};