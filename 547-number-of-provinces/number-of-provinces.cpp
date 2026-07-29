class Solution {
public:
    void dfs(vector<vector<int>>& adj, vector<int> &visited, int u){
        visited[u]=true;
        for(int &v: adj[u]){
            if(!visited[v]){
                visited[v]= true;
                dfs(adj,visited, v);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V= isConnected.size();
        vector<vector<int>> adj(V);
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                }
            }
        }
        vector<int> visited(V, false);
        int count=0;
        for(int i=0; i<V; i++){
            if(!visited[i]){
                dfs(adj, visited, i);
                count++;
            } 
        }
        return count;

    }
};