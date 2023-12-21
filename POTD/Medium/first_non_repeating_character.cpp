class Solution 
{
	public:
		string FirstNonRepeating(string str)
		{
		    string result="";
		    map<char,long long int> fre;
		    queue<char> q;
		    for(int i=0;i<str.size();i++)
		    {
		        if(fre[str[i]]==0)
		        q.push(str[i]);
		        fre[str[i]]++;
		        while(!q.empty() && fre[q.front()]>1)
		        {
		            q.pop();
		        }
		        if(q.empty())
		        result+='#';
		        else 
		        result+=q.front();
		    }
		    return result;
		}
};
/*
    As we need to print the first non-repeating character, it gives us the intuition to use a data structure with 
    FIFO (First In First Out) arrangement. Hence, we can use a queue here which will store the character and pops it out if it gets repeated.
    So the q.front() gives us the first non-repeating character each time. If at any point of time, the queue is empty, it means all the characters which have 
    appeared till now were repeated at some point of time, hence we will append '#' in that case.
*/