class Solution {
public:
    string largestOddNumber(string num) {
        string largest="";
        for(long long i=num.size()-1; i>=0; i--){
            if((num[i]-'0')%2!=0){
            largest=num.substr(0,i+1);
            break;
            }
        }
        return largest;
    }
};