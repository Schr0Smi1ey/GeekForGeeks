// Time complexity : O(N^2)
int len(string str,int low,int high)
{
    while(low>=0 && high<str.size() && str[low]==str[high])
    {
        low--;
        high++;
    }
    return high-low-1;
}
string longestPalin (string S)
{
    // method is to find the centre of the palindromic substring then expand it and count the length until it's palindrome
    int ans=INT_MIN,index = 0;
    for(int i=0;i<S.size();i++)
    {
        int len1 = len(S,i,i); // for odd length palindromic substring (centre is only one element)
        int len2 = len(S,i,i+1); // for even length palindromic substring (centre will be two element)
        int len = max(len1,len2);
        if(len>ans)
        {
            ans = len;
            index = i-((len-1)/2); // get the starting index of the substring
        }
    }
    return S.substr(index,ans); // return the substring which starts from index with length of (ans)
}



// Time complexity : O(N^3)
bool palindrome(string str)
{
    int l = 0,h=str.size()-1;
    while(l<=h)
    {
        if(str[l]!=str[h])
        return false;
        l++;
        h--;
    }
    return true;
}
string longestPalin (string S) 
{
    int max = -1;
    string ans;
    for(int i=0;i<S.size();i++)
    {
        string result = "";
        for(int j=i;j<S.size();j++)
        {
            result+=S[j];
            int temp = result.size();
            if(palindrome(result))
            {
                if(temp>max)
                {
                    max=temp;
                    ans = result;
                }
            }
        }
    }
    return ans;
}