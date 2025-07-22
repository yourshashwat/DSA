class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n= nums.size();
         int maxSum=0,sum=0;
         int i=0,j=0;
         unordered_set <int> seen;
         while(j<n){
                if(seen.find(nums[j])==seen.end()){
                seen.insert(nums[j]);
                sum+=nums[j];
                maxSum=max(sum,maxSum);
                j++;
            }
            else{
                seen.erase(nums[i]);
                sum-=nums[i];
                i++;
            }
            
         }
         return maxSum;

    }
};