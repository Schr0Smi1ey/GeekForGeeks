vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) 
{
    queue<long long int> q;
    vector<long long int> v;
    for(int i=0,j = 0;i<n;i++){
        if(arr[i] < 0){
            q.push(arr[i]);
        }
        if(i>=k-1){
            if(!q.empty()){
                v.push_back(q.front());
            }
            else{
                v.push_back(0);
            }
            if(arr[j++]<0)
            q.pop();
        }
    }
    return v;
 }