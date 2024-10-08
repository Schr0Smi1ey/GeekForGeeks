class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n)
    {
        vector<int> v;
        int x = a[n-1];
        v.push_back(x);
        for(int i=n-2;i>=0;i--)
        {
            if(a[i] >= x)
            {
                v.push_back(a[i]);
                x = a[i];
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};