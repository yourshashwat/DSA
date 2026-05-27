class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lower(26,0), upper(26,0);
        int count=0;
        for(char c:word){
            if(c>='a' ){
                if(upper[c-'a']==0)
                    lower[c-'a']=1;
                else lower[c-'a']=2;
            }
            else if(c<='Z'){
                if(lower[c+32-'a']==1)
                    upper[c-'A']=1;
                else upper[c-'A']=2;
            }
        }
        for(int i=0; i<26; i++){
            //cout<<char(i+'a')<<": "<<lower[i]<<", "<<char(i+'A')<<": "<<upper[i]<<endl;
            if(lower[i]==1 && upper[i]==1)
            count++;
        }
        return count;
    }
};