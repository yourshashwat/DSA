class Solution {
  public:
  
  void solve(vector <vector<int>> &adj, int u, vector<bool> &visited, vector<int> &result){
      if(visited[u]== true) return;
      result.push_back(u);
      visited[u]=true;
      
      for(int &v: adj[u]){
          if(visited[v]== false){
              solve(adj, v, visited, result);
          }
      }
  }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        vector<int> result;
        vector<bool> visited(n, false);
        solve(adj, 0, visited, result);
         
         return result;
    }
};