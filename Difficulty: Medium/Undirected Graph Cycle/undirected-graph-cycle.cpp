class Solution {
  public:
    
    bool isCycleDFS(unordered_map<int, vector<int>>& adj, int u, vector<bool> &visited, int parent){
        visited[u]= true;
        
        for(int &v: adj[u] ){
            if(v==parent)
            continue;
            
            if(visited[v]){
                return true; 
            }
            if(isCycleDFS(adj, v, visited, u)) return true;
        }
        return false;
    }
  
  
    bool isCycle(int V, vector<vector<int>>& adj) {
        // Code here
        vector<bool> visited(V+1, false);
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < adj.size(); i++) {
            mp[adj[i][0]].push_back(adj[i][1]);
            mp[adj[i][1]].push_back(adj[i][0]);
        }
        
        for(int i=1;i<=V; i++){
            if(!visited[i] && isCycleDFS(mp, i, visited, -1))
            return true;
        }
        return false;
    }
};