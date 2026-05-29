class Solution {
public:
    int digitSum(int n){
        int sum=0;
        while(n>0){
            int r= n%10;
            sum= sum+r;
            n/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int n= nums.size();
        int mini=INT_MAX;
        for(int i=0; i<n; i++){
            int sum= digitSum(nums[i]);
            if(digitSum(nums[i])<mini) mini= sum;
        }
        return mini;
    }
};