class Solution {
public:
int calculateBeauty(vector<int> &v){
    int mini=INT_MAX, maxi=INT_MIN;
   for(int i=0;i<26;i++){
    maxi=max(maxi,v[i]);
    if(v[i]!=0){
        mini=min(mini,v[i]);
    }
   }
    return maxi-mini;

}
    int beautySum(string s) {
        int n = s.size();
        if(n<3) return 0;
        int beauty=0;
        for(int i=0; i<n;i++){
            vector<int> v(26,0);
            for(int j=i; j<n;j++){
                v[s[j]-'a']++;
                 beauty+= calculateBeauty(v);
            }
        }
        return beauty;

    }
};