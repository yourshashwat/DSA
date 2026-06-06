class Solution {
public:
    int mod(long long a, long long b){
        if(a-b<0) return -(a-b);
        else return a-b;
    }
    vector<int> leftRightDifference(vector<int>& nums) {
        int n= nums.size();
        vector<long long> leftSum(n,0), rightSum(n,0);
        long long sum=0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            leftSum[i]= sum;
        }
        sum=0;
        for(int i=n-1; i>=0; i--){
            sum+=nums[i];
            rightSum[i]+=sum;
        }
        vector<int> ans(n,0);
        for(int i=0; i<n; i++){
            ans[i]= mod(leftSum[i],rightSum[i]);
        }
        return ans;
    }
};