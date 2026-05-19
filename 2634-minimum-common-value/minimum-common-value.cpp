class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,bool> mp;
        for(int x: nums1){
            mp[x]= true;
        }
        for(int x: nums2){
            if(mp[x]==true) return x;
        }
        return -1;
    }
};