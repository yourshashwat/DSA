class Solution {
public:

vector<int> topoSort(unordered_map<int, vector<int>> &adj, int n, vector<int> &indegree) {
    vector<int> result;
         queue<int> q;
         int count=0;
         for(int i=0; i<n; i++){
    if(indegree[i] == 0){
        q.push(i);
        count++;
        result.push_back(i);

    }
}
         while(!q.empty()){
            int u= q.front();
            q.pop();
            for(int &v: adj[u]){
                indegree[v]--;
                if(indegree[v]==0){
                    q.push(v);
                    count++;
                    result.push_back(v);
                }
            }
         }
         if(count==n) return result;
         else return {};

    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prereq) {
        unordered_map<int, vector<int>> adj;
        vector<int> indegree(numCourses);

        for(auto &v: prereq){
            int a=v[0];
            int b= v[1];
            adj[b].push_back(a);
            indegree[a]++;
        }

        return topoSort(adj, numCourses, indegree);
    }
};