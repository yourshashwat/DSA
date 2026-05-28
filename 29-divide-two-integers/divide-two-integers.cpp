// class Solution {
// public:
//     int divide(int dividend, int divisor) {
//         if(dividend==divisor) return 1;
//         int sign=1;
//         if(dividend<0 && divisor>0) sign=-1;
//         if(dividend>0 && divisor<0) sign=-1;
//         if(dividend==-1 && divisor==1) return -1;
//         if(divisor==1 || divisor==-1){
            
//             if(dividend==INT_MIN) return  divisor<0? INT_MAX: INT_MIN;
//             else return sign* dividend;
//         }
//         long long n= abs(dividend);
//         long long d= abs(divisor);
        
//         long long sum=0, q=0,ans=0;
//         int i=0;


//         while(n>0 && n>=d){
//             sum=0; i=0;
//             while ( (sum + (d << i)) <= n ){
//                 i++; sum+= d<<i;
//             }
//             if(i>=1) i--;
//             ans+=1<<i;
//             n= n- (d<<i);
//         }
//         return sign*ans;
//     }
// };

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow edge case
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if (dividend == divisor) return 1;

        // Determine the sign
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

        // Use long long to prevent absolute value overflow issues with INT_MIN
        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);
        
        long long ans = 0;

        // Outer loop: keep going while remainder is larger than or equal to divisor
        while (n >= d) {
            int i = 0;
            
            while (n >= (d << (i + 1))) {
                i++;
            }
            
            ans += (1LL << i);
            n -= (d << i);
        }

        return sign * ans;
    }
};