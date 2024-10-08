class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        vector<long long> ans(n);
        ans[0] = 1LL;ans[1] = 1LL;
        for(int i=2;i<n;i++)
        {
            ans[i] = ans[i-1] + ans[i-2];
        }
        return ans;
    }
};