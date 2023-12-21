class Solution {
  public:
    int sumOfNaturals(int n) 
    {
        return (1ll*n*(n+1)%(int)(1e9+7))/2;
    }
};