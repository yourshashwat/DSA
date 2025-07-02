class Solution {
public:
   
    int uniquePaths(int m, int n) {
        // int N=m+n-2;
        // int r=min(m-1,n-1);
        // long long ans=1;
        // for(int i=1;i<=r;i++){
        //     ans= ans*(N-r+i)/i;
        // }
        // return ans;

        int t[m][n];
        for(int i=0;i<m;i++){
            t[i][0]=1;
        }
         for(int i=0;i<n;i++){
            t[0][i]=1;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                t[i][j]= t[i-1][j]+ t[i][j-1];
            }
        }
        return t[m-1][n-1];
    }
};