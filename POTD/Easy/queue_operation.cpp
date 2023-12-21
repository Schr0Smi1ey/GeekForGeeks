// insert() and findFrequency()
class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k)
    {
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k)
    {
        int count = 0;
        queue<int> temp(q); // initialization of temp queue
        while(!temp.empty())
        {
            if(temp.front()==k) // there is no top() function for queue
            {
                count++;
            }
            temp.pop(); // don't forget to pop element after count
        }
        return count;
    }
    
};