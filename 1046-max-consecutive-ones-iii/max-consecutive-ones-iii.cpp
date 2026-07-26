class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n= nums.size();
        int l=0,r=0;
        int zero=0;
        int count=0;
        for(r=0; r<n; r++){
            if(nums[r]==0) zero++;
            while(zero>k){
                if(nums[l]==0) zero--;
                l++;
            }
            count=max(count, r-l+1);
        }
        return count;
    }
};