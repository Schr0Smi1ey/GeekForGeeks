// a very simple application of max-heap priority_queue

class Solution 
{
  public:
    long long maxDiamonds(int A[], int N, int K) 
    {
        long long int sum = 0;
        priority_queue<int> pq(A,A+N);
        while(K--)
        {
            int temp = pq.top();
            sum+=pq.top();
            pq.pop();
            pq.push(temp/2);
        }
        return sum;
    }
};