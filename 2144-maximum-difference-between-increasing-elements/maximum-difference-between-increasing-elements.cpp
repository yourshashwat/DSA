class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int mini=nums[0], maxDiff=-1;
        for(int i=1; i<n; i++){
            if(nums[i]>mini){
                maxDiff= max(maxDiff, nums[i]-mini);
            }
            else{
                mini=nums[i];
            }
        }
        return maxDiff;
    }
};