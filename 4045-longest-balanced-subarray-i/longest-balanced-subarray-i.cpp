class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n= nums.size();
         
         int maxi=0;
        for(int i=0; i<n;i++){
            int odd=0, even=0;
            unordered_map<int, bool> mp;
            for(int j=i; j<n; j++){
                if(mp.find(nums[j])==mp.end()){
                    mp[nums[j]]=true;
                    if(nums[j]%2==0) even++;
                    else odd++;
                }
                
                if(odd==even ){
                    maxi= max(maxi, j-i+1);
                }
            }
          
        }
        return maxi;
    }
};