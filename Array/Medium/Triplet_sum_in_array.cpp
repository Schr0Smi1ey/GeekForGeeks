class Solution{
    public:
    bool find3Numbers(int arr[], int n, int x)
    {
        // FIRST SOLUTION : 

        // unordered_map<int,int> mp;
        // for(int i=0;i<n;i++){
        //     mp[arr[i]] = i+1;
        // }
        // for(int i=0;i<n;i++){
        //     int comp = x - arr[i];
        //     for(int j=i+1;j<n;j++){
        //         int need = comp - arr[j],flag = mp[need];
        //         if(flag && (flag != (i+1) && flag != (j+1))){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        
        // SECOND SOLUTION 
        // sort(arr,arr+n);
        // for(int i=0;i<n;i++){
        //     int comp = x - arr[i];
        //     for(int l = i+1,r = n - 1;l < r;l++){
        //         while(l + 1 < r && (arr[l] + arr[r] > comp)) r--;
        //         if(arr[l] + arr[r] == comp){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        
        // THIRD SOLUTION
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            int comp = x - arr[i];
            int l = i+1,r = n-1,flag = 1;
            while(l < r){
                int total = arr[l] + arr[r];
                if(total == comp) return true;
                if(total > comp) r--;
                else l++;
            }
        }
        return false;
    }

};