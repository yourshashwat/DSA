class Solution {
  public:
  
  bool isCyclicDFS(unordered_map <int, vector<int>> &mp, int u, vector<bool> &visited, vector<bool> 
  &inRecursion)
  {
      visited[u]=inRecursion[u]= true;
      
      for(int &v: mp[u]){
          if(!visited[v] && isCyclicDFS(mp, v, visited, inRecursion)){
              return true;
          }
          if(inRecursion[v]) return true;
      }
      inRecursion[u]= false;
      return false;
  }
  
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<bool> visited(V,false);
        vector<bool> inRecursion(V,false);
        unordered_map <int, vector<int>> mp;
        
        for(int i=0;i<edges.size();i++){
           mp[edges[i][0]].push_back(edges[i][1]);
        }
        for(int i=0;i<V;i++){
            if(!visited[i] && isCyclicDFS(mp, i, visited, inRecursion))
            return true;
        }
        return false;
    }
};