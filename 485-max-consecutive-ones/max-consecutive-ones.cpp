class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int sum=0;
        int n= nums.size();
        for(int i=0;i<n; i++){
            if(nums[i]==1){
                sum++;
                maxi= max(sum,maxi);
            }
            if(nums[i]==0){
                sum=0;
            }

        }
        return maxi;
    }
};