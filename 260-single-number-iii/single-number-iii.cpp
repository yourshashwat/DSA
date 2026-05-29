class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       int n=nums.size();
       int x=0;
       for(int i=0; i<n; i++){
        x^=nums[i];
       }
       int i=0;
       for(i=0; i<31; i++){
            if(((x>>i) & 1)==1)break;
       } 
       int mock=1<<i;
       int group1=0, group2=0;
       for(int j=0; j<n; j++){
        if(nums[j] & mock)
            group1^=nums[j];
        else
            group2^=nums[j];
       }
       return {group1, group2};
    }
};