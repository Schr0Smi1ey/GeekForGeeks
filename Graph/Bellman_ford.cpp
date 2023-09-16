class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector<int> bellman_ford(int n, vector<vector<int>>& edges, int src) 
    {
        vector<int> dis(n,1e8);
        dis[src] = 0;
        for(int i=1;i<=n-1;i++)
        {
            for(auto it : edges)
            {
                int u = it[0],v = it[1],w = it[2];
                
                if(dis[u] != 1e8 && (dis[u] + w < dis[v]))
                {
                    dis[v] = dis[u] + w;
                }
            }
        }
        for(int i=1;i<=n-1;i++)
        {
            for(auto it : edges)
            {
                int u = it[0],v = it[1],w = it[2];
                
                if(dis[u] != 1e8 && (dis[u] + w < dis[v]))
                {
                    return {-1};
                }
            }
        }
        return dis;
    }
};

