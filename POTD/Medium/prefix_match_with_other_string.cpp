class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str)
    {   
        
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(k>arr[i].size())
            continue;
            if(arr[i].substr(0,k)==str.substr(0,k))
            count++;
        }
        return count;
    }
};