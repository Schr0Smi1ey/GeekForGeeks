class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node,vector<int> & result,vector<bool>&visited,vector<int> adj[])
    {
        visited[node] = true;
        
        result.push_back(node);
        
        for(auto v : adj[node])
        {
            if(!visited[v])
            {
                visited[v] = true;
                dfs(v,result,visited,adj);
            }
        }
    }
    vector<int> dfsOfGraph(int n, vector<int> adj[]) 
    {
        vector<int> result;
        vector<bool> visited(n,false);
        dfs(0,result,visited,adj);
        return result;
    }
};