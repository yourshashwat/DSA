class Solution {
public:
    string removeOuterParentheses(string s) {
        int n= s.size();
        string ans="";
        int counter=0;
        for(int i=0;i<n;i++){
            if(s[i]==')') counter--;
            if(counter!=0) ans+=s[i];
            if(s[i]=='(') counter++;
        }
        return ans;
    }
};