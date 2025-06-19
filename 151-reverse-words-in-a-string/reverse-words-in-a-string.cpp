class Solution {
public:
string trim(string s){
    int n= s.size();
    int start=0; int end=n-1;
    while(s[start]==' ') start++;
    while(s[end]==' ') end--;
    return s.substr(start,end-start+1);
}
    string reverseWords(string s) {
        s= trim(s);
        string ans="";
        stack<char> st;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]!=' ') st.push(s[i]);
            else{
                if(st.empty()) continue;
                while(!st.empty()){
                    ans+=st.top(); st.pop();
                }
                ans+=" ";
            }
        }
        while(!st.empty()){
                    ans+=st.top(); st.pop();
                }
        
        return ans;	
    }
};