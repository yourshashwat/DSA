class Solution {
public:
    bool isBipartiteDFS(vector<vector<int>>& graph, int curr, vector<int> &color, int currColor){
        color[curr]= currColor;
        for(int &v: graph[curr]){
            if(color[v]==color[curr])
            return false;
            if(color[v]==-1){
            int colorV= 1-currColor;
            if(!isBipartiteDFS(graph,v,color, colorV))
            return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int V= graph.size();
        vector<int> color(V,-1);
        for(int i=0; i<V; i++){
            if(color[i]==-1){
                if(!isBipartiteDFS(graph, i, color, 1))
                return false;
            }
        }
        return true;
    }
};