class Solution {
public:
    int val(char c){
        if (c=='I') return 1;
        else if (c=='V') return 5;
        else if(c=='X') return 10;
        else if(c=='L') return 50;
        else if(c=='C') return 100;
        else if(c=='D') return 500;
        else if(c=='M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int n= s.size();
        int i=0;
        int ans=0;
        while(i<n){
            while(i+1<n && val(s[i])>=val(s[i+1])){
                ans+= val(s[i]);
                i++;
            }
            while(i+1<n && val(s[i])<val(s[i+1])){
                ans-=val(s[i]);
                i++;
            }
            if(i==n-1){
                ans+=val(s[i]);
                i++;
            }

        }
        return ans;
    }
};