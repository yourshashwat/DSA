class Solution {
public:
const int MOD = 1e9 + 7;
    long long modPow(long long base, long long exp){
        long long result=1;
        while(exp>0){
            if(exp%2==1){
                result= (result*base)% MOD;
            }
            base= (base*base)%MOD;
            exp/=2;
        }
        return result;
    }
    int countGoodNumbers(long long n) {
        long long even =(n+1)/2;
        long long odd= n/2;
        long long result= ((modPow(5,even) % MOD)* (modPow(4,odd)% MOD))%MOD;
        return int(result);
    }
};