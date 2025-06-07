class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto it: nums){
            map[it]++;
            if(map[it]>1)
            return true;
        }
        return false;
    }
};