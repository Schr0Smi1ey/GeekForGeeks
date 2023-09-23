class Solution
{
public:
    int dp[1005][1005];

    int knapsack(int n, int w, int value[], int weight[])
    {
        // Base case: If there are no items or no weight left, return 0.
        if (n == 0 || w == 0)
            return 0;

        // If the value for this state is already computed, return it.
        if (dp[n][w] != -1)
            return dp[n][w];

        // Check if the weight of the current item can fit in the remaining weight.
        if (weight[n - 1] <= w)
        {
            // Two choices: Take the current item or skip it.
            // Return the maximum value between taking and not taking the current item.
            return dp[n][w] = max(value[n - 1] + knapsack(n - 1, w - weight[n - 1], value, weight), knapsack(n - 1, w, value, weight));
        }
        else
        {
            // If the current item is too heavy, skip it.
            return dp[n][w] = knapsack(n - 1, w, value, weight);
        }
    }

    int knapSack(int W, int wt[], int val[], int n)
    {
        // Initialize the DP array with -1.
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= W; j++)
            {
                dp[i][j] = -1;
            }
        }

        // Call the knapsack function to find the maximum value.
        return knapsack(n, W, val, wt);
    }
};

// Iterative Approach
class Solution
{
    public:
    int knapSack(int w, int weight[], int value[], int n) 
    { 
        int dp[1005][1005];
       for(int i=0;i<=n;i++)
       {
           for(int j=0;j<=w;j++)
           {
               if(i==0 || j==0)
               {
                   dp[i][j] = 0;
               }
           }
       }
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=w;j++)
           {
               if(weight[i-1] <= j)
               {
                   dp[i][j] = max(dp[i-1][j-weight[i-1]] + value[i-1],dp[i-1][j]);
               }
               else
                dp[i][j] = dp[i-1][j];
           }
       }
       return dp[n][w];
    }
};