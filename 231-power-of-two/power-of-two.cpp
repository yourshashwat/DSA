class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1 || n==2) return true;
        int c=n%10;
        if(c%2!=0) return false;
        long num=2;
        while(num<n){
            num=num*2;
            if(n==num) return true;
        }
        return false;
    }
};