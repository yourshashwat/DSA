class Solution {
public:
    bool isAnagram(string s, string t) {
        int m=s.size();
        int n= t.size();
        if(m!=n) return false;
        int freq[26]={0};
        for(int i=0;i<s.size(); i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(freq[i]!=0) return false;
        }
        return true;
    }
};