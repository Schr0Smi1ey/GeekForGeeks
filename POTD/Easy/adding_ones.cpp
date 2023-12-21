class Solution{
    public:
    void update(int a[], int n, int updates[], int k)
    {
        for(int i=0;i<k;i++)
        {
            a[updates[i]-1]++; // add one to all the updates
        }
        for(int i=1;i<n;i++)
        {
            a[i]+=a[i-1];  // cumulative sum will give the desired answer
            // suppose we update the i index with 1...it means we obviously have to update the all other index also...that's why cumulative sum
        }
    }
};