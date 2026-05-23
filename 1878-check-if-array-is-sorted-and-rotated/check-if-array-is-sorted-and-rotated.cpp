class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return true;
        int count=0;
        for(int i=0; i<n; i++){
            if(i==0 && nums[0]>=nums[n-1] && nums[0]<= nums[i+1]) continue;
            else if(i==n-1 && nums[i]>= nums[i-1] && nums[i]<= nums[0]) continue;
            else if(i!=0 && i!=n-1 && nums[i]>= nums[i-1] && nums[i]<= nums[i+1]) continue;
            else count++;
            if(count==3) return false;
        }
        return true;
    }
};