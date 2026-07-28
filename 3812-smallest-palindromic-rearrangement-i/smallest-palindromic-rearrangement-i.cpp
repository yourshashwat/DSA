class Solution {
public:
    string smallestPalindrome(string s) {
        int n= s.size();
        int mid=n/2;
        sort(begin(s), begin(s)+mid);
        //cout<<s;
        for(int i=mid; i<n; i++){
            s[i]= s[n-1-i];
        }
        return s;
    }
};