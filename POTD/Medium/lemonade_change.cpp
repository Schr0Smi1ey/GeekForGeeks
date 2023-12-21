class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) 
    {
        int five=0,ten=0;
        for(int i=0;i<N;i++)
        {
            if(bills[i]==5)
            five++;
            else if(bills[i]==10)
            {
                ten++;
                if(five>0)
                five--;
                else 
                {
                    return false;
                }
            }
            else if(bills[i]==20)
            {
                if(five>0 && ten>0)
                {
                    five--;ten--;
                }
                else if(five>=3)
                {
                    five-=3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};