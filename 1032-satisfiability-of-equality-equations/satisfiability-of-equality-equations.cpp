class Solution {
public:
    vector<int> parent;
    vector<int> rank;
    int find(int i){
        if(parent[i]!=i){
            parent[i]= find(parent[i]);
        }
        return parent[i];
    }
    void Union(int x, int y){
        int xp= find(x);
        int yp= find(y);
        if(xp!=yp){
            if(rank[xp]>rank[yp]){
                parent[yp]= xp;
            }
            else if(rank[xp]<rank[yp]){
                parent[xp]= yp;
            }
            else{
                parent[xp]= parent[yp];
                rank[xp]++;
            }
        }
    }
    bool equationsPossible(vector<string>& equations) {
        parent.resize(26);
        rank.resize(26,0);
        for(int i=0; i<26; i++){
            parent[i]=i;
        }

        int n= equations.size();
        for(int i=0; i<n; i++){
            string s= equations[i];
            if(s[1]== '=')
                Union(s[0]-'a', s[3]-'a');
        }

        for(int i=0; i<n; i++){
            string s= equations[i];
            if(s[1]== '!'){
                int x= find(s[0]-'a');
                int y= find(s[3]- 'a');
                if(x==y)  return false;
                }
        }

        return true;

    }
};