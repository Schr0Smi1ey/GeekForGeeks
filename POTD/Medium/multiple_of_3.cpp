class Solution{
public:	
		
	int isDivisible(string s)
	{
	    int e=0,o=0;
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]=='1')
	        {
	            i&1?o++:e++;
	        }
	    }
	    return (abs(o-e))%3==0;
	}
};
