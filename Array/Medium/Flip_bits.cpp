class Solution{
    public:
    // Kadane's Algorithm
    int maxOnes(int a[], int n)
    {
        int ans = INT_MIN,one = 0,zero = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i] == 0)
            {
                zero++;
            }
            else
            {
                one++;
                if(zero > 0)
                {
                    zero--;
                }
            }
            ans = max(ans,zero);
        }
        return ans+one;
    }
};