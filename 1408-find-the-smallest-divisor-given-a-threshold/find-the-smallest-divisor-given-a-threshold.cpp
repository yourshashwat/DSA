class Solution {
public:
    long long divisorSum(vector<int>& nums, int mid){
        long long sum=0;
        for(auto it:nums){
            sum+= (it+mid-1)/mid;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high= *max_element(nums.begin(), nums.end());
        if(threshold==nums.size()) return high;
        int low=1;
        while(low<=high){
            int mid=(low+high)/2;
            if(divisorSum(nums,mid)<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};