class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int n, vector<int> adj[]) 
    {
        vector<int> result;
        vector<bool> visited(n,false);
        int node = 0;
        queue<int> q;
        q.push(node);
        visited[node] = true;
        result.push_back(node);
        
        while(!q.empty())
        {
            int current = q.front();
            q.pop();
            
            for(auto u : adj[current])
            {
                if(!visited[u])
                {
                    visited[u] = true;
                    result.push_back(u);
                    q.push(u);
                }
            }
        }
        return result;
    }
};