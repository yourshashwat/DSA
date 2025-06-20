#include <bits/stdc++.h>
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,char> charMap;
        unordered_set<char> mapped;
         for(int i=0;i<s.size();i++){
            char key=s[i];
            char value= t[i];
            if(charMap.find(key)==charMap.end()){
                if(mapped.find(value)==mapped.end()){
                    charMap[key]= value;
                    mapped.insert(value);
                }
                else return false;
            }
            else{
                if(charMap[s[i]]!=value)
                return false;
            }
         }
         return true;
    }
};