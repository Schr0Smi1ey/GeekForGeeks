class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    for(int i=0,j=0;i<n;i++){
	        if(arr[i]){
	            swap(arr[i],arr[j++]);
	        }
	    }
	}
};