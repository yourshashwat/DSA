class Solution {
public:
    int t[1001][1001];
    bool solve(string &s, int i, int j){
        if(i>=j) return true;
        if(t[i][j]!=-1){
            return t[i][j];
        }
        else if(s[i]==s[j])
        return t[i][j]= solve(s,i+1,j-1);

        return t[i][j]=0;
    }
    string longestPalindrome(string s) {
        memset(t,-1, sizeof(t));
        int n=s.size();
        int maxlen=INT_MIN;
        
        int sp=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(j-i+1<=maxlen) continue;
                if(solve(s,i,j)){
                    if(j-i+1>maxlen){
                        maxlen=j-i+1;
                        sp=i;
                        
                    }
                }
            }
        }
        return s.substr(sp,maxlen);
    }
};