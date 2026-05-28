class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n= nums.size();
        int ans=0;
        for(int k=0; k<=31; k++){
            int temp= (1<<k);
            int count1=0;
            for(int x: nums){
                if((x & temp)!=0) count1++;
            }
            if(count1%3!=0) 
            ans= ans|temp;
        }
        return ans;
    }
};