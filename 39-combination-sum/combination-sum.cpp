class Solution {
public:
    void solve(vector<int> &can, vector<vector<int>>&res,vector<int> &curr, int sum, int &target, int index){
        if(sum== target){
            res.push_back(curr);
            return;
        }
        if(sum>target) return;

        for(int i=index;i<can.size();i++){
            curr.push_back(can[i]);
            solve(can, res,curr, sum+can[i], target, i );
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& can, int target) {
        int n= can.size();
        vector<vector<int>> res;
        vector<int> curr;
        solve(can, res, curr, 0, target,0);
        return res;
    }
};