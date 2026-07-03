class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1= nums1.size(), n2= nums2.size();
        stack <int> st;
        unordered_map<int, int> mp;
        mp[nums2[n2-1]]=-1;
        st.push(nums2[n2-1]);
        for(int i=n2-2; i>=0; i--){
            if(st.empty()) {
                mp[nums2[i]]=-1;
                st.push(nums2[i]);
                continue;
            }
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()) mp[nums2[i]]=-1; 
            else mp[nums2[i]]=st.top();
            st.push(nums2[i]);
        }
        vector<int> ans(n1);
        for(int i=0; i<n1; i++){
            if(mp.find(nums1[i])!= mp.end()) ans[i]= mp[nums1[i]];
            else ans[i]=-1;
        }
        return ans;

    }
};