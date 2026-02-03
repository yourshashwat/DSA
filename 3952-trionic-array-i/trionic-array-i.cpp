class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i=0, p=0, q=0, r=0;
        int n=nums.size();
        if(nums[i]>=nums[i+1]) return false;
        while(i<(n-1) &&  nums[i]<nums[i+1] ){
            i++;
            p=1;
        }
        if( i>=n-1 || nums[i]==nums[i+1] ) return false;
        while(i<(n-1) && nums[i]>nums[i+1] ) {
            i++;
            q=1;
        }
         if( i>=n-1 || nums[i]==nums[i+1] ) return false;
          while(i<(n-1) && nums[i]<nums[i+1] ){
            i++;
            r=1;
        }
        if(i==(n-1) && p==q && q==r) return true;
        
        return false;
    }
};