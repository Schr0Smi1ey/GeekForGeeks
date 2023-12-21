class Solution
{
	public:	
	vector<int> kLargest(int arr[], int n, int k) 
	{
	    sort(arr,arr+n,greater<int>());
	    vector<int> result(k);
	    for(int i=0;i<k;i++)
	    {
	        result[i]=arr[i];
	    }
	    return result;
	}
};