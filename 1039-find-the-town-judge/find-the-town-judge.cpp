class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return 1;
        vector<int> inDeg(n+1,0);
        vector<vector<int>> adj(n+1);
        for(auto t:trust){
            adj[t[0]].push_back(t[1]);
            inDeg[t[1]]++;
        }
        int res=-1;
        for(int i=0;i<=n;i++){
            if(inDeg[i]==n-1&&adj[i].empty()){
                return i;
            }
        }
        return res;
    }
};