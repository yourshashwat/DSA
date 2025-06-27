class Solution {
public:

  int climbStairs(int n) {
        if(n==1|| n==2) return n;
       int a=1;
       int b=2;
       int c;
       for(int i=3; i<=n; i++){
        c=a+b;
        int temp=b;
        b=c;
        a=temp;
       }
    return c;
    }
    // int t[46];
    // int solve(int n){
    //     if(n==0) return 1;
    //     if(n<0) return 0;
    //     if(t[n]!=-1) return t[n];
    //     int one_step=solve(n-1);
    //     int two_step= solve(n-2);

    //     return t[n]= one_step+two_step;
    // }
    // int climbStairs(int n) {
    //     memset(t,-1, sizeof(t));
    //     return solve(n);
    // }
};