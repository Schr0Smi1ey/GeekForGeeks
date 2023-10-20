#include<bits/stdc++.h>
using namespace std;
class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int n, vector<int> adj[], int x) 
	{
	    bool visited[n];
	    memset(visited,false,sizeof(visited));
	    queue<int> q;
	    q.push(0);
	    visited[0] = true;
	    int level = 0;
	    while(!q.empty()){
	        level++;
	        int loop = q.size();
	        while(loop--){
	            for(auto v : adj[q.front()]){
	                if(!visited[v]){
	                    q.push(v);
	                    visited[v] = true;
	                }
	                if(v == x){
	                    return level;
	                }
	            }
	            q.pop();
	        }
	    }
	    return -1;
	}
};

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;
    	vector<int> adj[V];
    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;
    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }
    return 0;
}