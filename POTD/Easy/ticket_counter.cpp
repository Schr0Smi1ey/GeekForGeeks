class Solution {
  public:
    int distributeTicket(int N, int K) 
    {
        queue<int> arr;
        int i=1,j=N,temp;
        while(N)
        {  
            temp = K; 
            while(temp-- && N!=0) //  corner case (N!=0)
            {
                arr.push(i++);
                N--;
            }
            if(!N)
            break;
            temp = K;
            while(temp-- && N!=0) //  corner case (N!=0)
            {
                arr.push(j--);
                N--;
            }
            if(!N)
            break;
        }
        return arr.back();
    }
};