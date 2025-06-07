class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        queue<int> q;
        int i=0, j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                q.push(nums1[i++]);
            }
            else{
                q.push(nums2[j++]);
            }
        }
        while(i<m){
            q.push(nums1[i++]);
        }
        while(j<n){
            q.push(nums2[j++]);
        }
        i=0;
        while(!q.empty()){
            nums1[i++]=q.front();
            q.pop();
        }
    }
};