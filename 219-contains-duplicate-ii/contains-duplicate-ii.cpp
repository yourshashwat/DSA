class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        map[nums[0]]=1;
        for(int i=1;i<nums.size();i++){
            if(map[nums[i]]==0){
                 map[nums[i]]=i+1;
            }
            else if(map[nums[i]]>=1 && abs(i+1-map[nums[i]])<=k){
                return true;
            }
            else{
                map[nums[i]]=i+1;
            }
        }
        return false;
    }
};