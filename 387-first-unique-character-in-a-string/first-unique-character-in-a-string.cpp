class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26,0);
        queue<int> q;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(v[ch-'a']==0) q.emplace(i);
            v[ch-'a']++;
        }
        while(!q.empty() && v[s[q.front()]-'a']>1){
            q.pop();
        }
        return q.empty() ? -1: q.front();
    }
};