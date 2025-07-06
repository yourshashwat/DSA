class FindSumPairs {
public:
    vector<int> vec1;
    vector<int> vec2;
    unordered_map<int,int> mp2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        vec1=nums1;
        vec2=nums2;
        // for(int &x: nums1){
        //     mp1[x]++;
        // }
        for(int &x: nums2){
            mp2[x]++;
        }
    }
    
    void add(int i, int val) {
        mp2[vec2[i]]--;
        vec2[i]+=val;
        mp2[vec2[i]]++;
    }
    
    int count(int tot) {
        int count=0;
        for(int &x : vec1){
            count+= mp2[tot-x];
        }
        return count;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */