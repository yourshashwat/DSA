// class Solution {
// public:
//     bool canPartitionGrid(vector<vector<int>>& grid) {
//         int m= grid.size();
//         int n= grid[0].size();
//         if(m==1 && n==1) return false;


//         vector<long long> rowSum(m,0), colSum(n,0);
//         for(int i=0; i<m; i++){
//             long long sum=0;
//             for(int j=0; j<n; j++){
//                 sum+=grid[i][j];
//             }
//             rowSum[i]= sum;
//             cout<<sum<<" ";
//         }

//         for(int i=0; i<n; i++){
//             long long sum=0;
//             for(int j=0; j<m; j++){
//                 sum+=grid[j][i];
//             }
//             colSum[i]= sum;
//             cout<<sum<<" ";
//         }

//         vector<long long> postSumCol(n,0), postSumRow(m,0);
//             long long sum=0;
//             for(int i=n-1; i>=0; i--){
//                 sum+=colSum[i];
//                 postSumCol[i]=sum;
//             }
//             sum=0;

//             for(int i=0;i<n-1; i++){
//                 sum+=colSum[i];
//                 if(sum== postSumCol[i+1]) return true;
//             }
//             sum=0;
//             for(int i=m-1; i>=0; i--){
//                 sum+=rowSum[i];
//                 postSumRow[i]=sum;
//             }
//             sum=0;

//             for(int i=0;i<m-1; i++){
//                 sum+=rowSum[i];
//                 if(sum== postSumRow[i+1]) return true;
//             }

//         return false;

//     }
// };

class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        long long total = 0;

        // total sum
        for (auto &row : grid) {
            for (auto &val : row) {
                total += val;
            }
        }

        // if odd → impossible
        if (total % 2 != 0) return false;

        long long target = total / 2;

        //  check horizontal cut
        long long curr = 0;
        for (int i = 0; i < m - 1; i++) {  // m-1 because last row not allowed
            for (int j = 0; j < n; j++) {
                curr += grid[i][j];
            }
            if (curr == target) return true;
        }

        //  check vertical cut
        curr = 0;
        for (int j = 0; j < n - 1; j++) {  // n-1 because last column not allowed
            for (int i = 0; i < m; i++) {
                curr += grid[i][j];
            }
            if (curr == target) return true;
        }

        return false;
    }
};
