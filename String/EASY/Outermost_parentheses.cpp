class Solution {
  public:
    string removeOuter(string& s) 
    {
        stack<char> stk;
        string result = "";
        stk.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
            if(stk.empty())
            {
                stk.push(s[i]);
                continue;
            }
            if(!stk.empty() && stk.top() != s[i])
            {
                stk.pop();
                if(!stk.empty())
                result += s[i];
            }
            else
            {
                stk.push(s[i]);
                result += stk.top();
            }
        }
        return result;
    }
};
