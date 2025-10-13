class Solution {
public:

    bool isAnagram(string one, string two){
        if(one.size()!=two.size()) return false;
        //unordered_map<char, int> mp;
        int n=one.size();
        vector<int> count(26,0);
        for(int i=0;i<n;i++){
           count[one[i]-'a']++;
        }
        for(int i=0;i<n;i++){
           count[two[i]-'a']--;
        }
        for(int i=0;i<26;i++){
           if(count[i]!=0) return false;
        }
        return true;

    }


    vector<string> removeAnagrams(vector<string>& words) {
        if(words.size()==1) return words;
        int n=words.size();
        for(int i=1;i<words.size();){
            if(isAnagram(words[i],words[i-1])){
                words.erase(words.begin()+i);
            }
            else{
                i++;
            }
        }
        return words;
    }
};