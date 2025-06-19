class Solution {
public:
    string removeOccurrences(string s, string part) {
        int p=part.size();
        for(int i=0; i<s.size(); ){
        if(s.substr(i,p)== part){
            s.erase(i,p);
            i=max(0,i-p);
        }
        else i++;
        
    }
    return s;
    }
};