class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long sum = 0;
        for(int i=1;i<=N;i++){
            sum += (N/i)*i;
        }
        return sum;
    }
};

/*
    Let n = 6,

    => F(1) + F(2) + F(3) + F(4) + F(5) + F(6)

    => 1 will occurs 6 times in F(1), F(2),

    F(3), F(4), F(5) and F(6)

    => 2 will occurs 3 times in F(2), F(4) and

    F(6)

    => 3 will occur 2 times in F(3) and F(6)

    => 4 will occur 1 times in F(4)

    => 5 will occur 1 times in F(5)

    => 6 will occur 1 times in F(6)

    Every number from 1 to N contributes its presence up to the highest multiple less than N.
    It can easily be observed that number i is occurring only in their multiples less than or equal to n. 
    Thus, we just need to find the count of multiples and then multiply it with i for full contribution in the final sum. 
    It can easily be done in O(1) time by taking the floor of (n / i) and then multiply it with i for the sum.
*/