class Solution {
public:

    string getCanonical(string s){
       sort(s.begin(), s.end());
       return s;
    }


    vector<string> removeAnagrams(vector<string>& words) {
        
        if(words.size()==1) return words;

        int i=1;
        string prevCanonical= getCanonical(words[0]);

        for(int j=1; j<words.size(); j++){
             string currCanonical= getCanonical(words[j]);
             if(prevCanonical!=currCanonical){
                prevCanonical= currCanonical;
                words[i]= words[j];
                i++; 
             }
        }

        words.resize(i);

        return words;
    }
};