class Solution
{
    public:
    //Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n) 
    {
        // code here
        map<string,int> mp;
        int max = INT_MIN;
        string result;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        vector<pair<string,int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back({arr[i],mp[arr[i]]});
            mp[arr[i]]=0;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i].second>=max)
            {
                max = v[i].second;
                result = v[i].first;
            }
        }
        return result;
    }
};