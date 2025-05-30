class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size();
        int low=0, high=n-1, mid=0;
        while(low<=high){
            mid=(low+high)/2;
            if(low==high) return nums[mid];
            if(mid%2==0 && nums[mid]==nums[mid-1]){
                high=mid-2;
            }
            else if(mid%2==0 && nums[mid]==nums[mid+1]){
                low=mid+2;
            }
            else if(mid%2!=0 && nums[mid]==nums[mid-1]){
                low=mid+1;
            }
             else if(mid%2!=0 && nums[mid]==nums[mid+1]){
                high=mid-1;
            }
            else
            return nums[mid];

        }
        return nums[mid];
    }
};