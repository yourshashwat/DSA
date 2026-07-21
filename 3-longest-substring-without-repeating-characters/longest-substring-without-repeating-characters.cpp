class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.size();
        int l=0, r=0;
        int len= 0;
        unordered_map<char, int> mp;
        while(r<n){
            if(mp[s[r]]!=1){
                mp[s[r]]=1;
                
            }
            else{
                while(s[l]!=s[r]){
                    mp[s[l]]=0;
                    l++;
                }
                l++;
            }

            len=max(len, r-l+1);
            r++;
        }
        return len;
    }
};