class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int jk=k;
        for(int i=x; i<x+jk/2; i++){
            for(int j= y; j<y+jk; j++){
                swap(grid[i][j], grid[x+k-1][j]);
            }
            k--;
        }
        return grid;
    }
};