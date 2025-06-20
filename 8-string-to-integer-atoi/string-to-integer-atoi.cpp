class Solution {
public:
    int myAtoi(string s) {
        set<char> st={'.','+','-','0', '1', '2', '3', '4', '5', '6', '7', '8', '9',' '};
        long long ans=0;
        char sign='+';
        int signCount=0, digitCount=0;
        if(s[0]=='.') return 0;
        for(int i=0;i<s.size(); i++){
            if(st.find(s[i])==st.end()) break;

            if(s[i]-48>=0 && s[i]-48<=9){
                digitCount++;
                ans= ans*10+ (s[i]-48);
            }
            if(s[i]==' ' && digitCount>=1) break;
            if(s[i]==' ' && signCount>=1) break;
            if(s[i]==' '&& ans==0) continue;
            
            if(s[i]=='+' || s[i]== '-' ){
                if(digitCount>=1) break;
                sign=s[i];
                signCount++;
                if(signCount>1) break;
            }
            if(s[i]=='.') break;
            if(ans>=INT_MAX && sign=='+') return INT_MAX;
            if(ans>=abs((long long)INT_MIN) && sign=='-') return INT_MIN;
            
            
        }
        return sign=='-'?-(ans):ans; 
    }
};