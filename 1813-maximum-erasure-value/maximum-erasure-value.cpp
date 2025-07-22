class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n= nums.size();
         int maxSum=0,sum=0;
         int i=0,j=0;
         unordered_map <int,int> mp;
         while(i<n && j<n){
            while(j<n && mp.find(nums[j])==mp.end()){
                mp[nums[j]]++;
                sum+=nums[j];
                maxSum=max(sum,maxSum);
                j++;
            }
            if(j<n && mp.find(nums[j])!=mp.end()){
                
                while(i<n && nums[i]!=nums[j]){
                    mp.erase(nums[i]);
                    sum-=nums[i];
                    i++;
                }
                if(i<n && nums[i]==nums[j]){
                    
                    sum-=nums[i];
                    mp.erase(nums[i]);
                }
                i++;
            }
         }
         return maxSum;

    }
};