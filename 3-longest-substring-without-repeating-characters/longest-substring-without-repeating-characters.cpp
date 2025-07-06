class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0 || n==1) return n;
        int count=0, maxi=1;
        int i=0, j=1;
        unordered_map<char, int> mp;
        mp[s[0]]++;
        while(i<n && j<n){
            if(mp.find(s[j])== mp.end()){
                count=j-i+1;
                maxi=max(maxi,count);
                mp[s[j]]=1;
                j++;
            }
            else{
            mp.erase(s[i]);
            i++;
        }
        }
        return maxi;
    }
};