class Solution {
public:
    vector<int> parent;
    vector<int> rank;
    int find(int i){
        if(parent[i]!=i)
        parent[i]= find(parent[i]);

        return parent[i];
    }

    void Union(int x, int y){
        int xp= find(x);
        int yp= find(y);

        if(xp!=yp){
            if(rank[xp]> rank[yp]){
                parent[yp]= xp;
            }
            else if(rank[xp]< rank[yp]){
                parent[xp]= yp;
            }
            else{
                parent[xp]=yp;
                rank[yp]++;
            }
        }
    }

    int makeConnected(int n, vector<vector<int>>& connections) {
        parent.resize(n);
        rank.resize(n,0);
        for(int i=0; i<n; i++){
            parent[i]=i;
        }
        if(connections.size()<n-1) return -1;
        int components=n;
        for(auto &edge: connections){
            int x= edge[0];
            int y= edge[1];
            if(find(x)!=find(y)){
                Union(x,y);
                components--;
            }
        }
        return components-1;
    }
};