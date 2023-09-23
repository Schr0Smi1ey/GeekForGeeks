class Solution {
  public:  
    bool detect(int src,int parent,vector<int> adj[],vector<bool>& visited)
    {
        visited[src] = true;
        
        for(auto v : adj[src])
        {
            if(!visited[v])
            {
                if(detect(v,src,adj,visited))
                return true;
            }
            else if(v != parent)
            {
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) 
    {
        vector<bool> visited(V+1,false);
        for(int i=0;i<V;i++)
        {
            if(!visited[i] && detect(i,-1,adj,visited))
            return true;
        }
        return false;
    }
};