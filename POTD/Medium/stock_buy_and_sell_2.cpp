class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &arr) 
    {
    //     int temp = arr[0],sum=0;
    //     for(int i=1;i<n;i++)
    //     {
    //         if(arr[i]<temp)
    //         {
    //             sum+=arr[i-1]-temp;
    //             temp = arr[i];
    //         }
    //         else if(i==n-1)
    //         {
    //             sum+=arr[i]-temp;
    //         }
    //     }
    //     return sum;

    int profit = 0 ;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        profit+=arr[i]-arr[i-1];
    }
    return profit;
    }
};