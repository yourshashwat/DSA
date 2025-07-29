class Solution {
public:
void subsequence(int i, vector<int> &arr, vector<vector<int>> &sub, vector<int> &temp){
    int n=arr.size();
    if(i>=n){
        vector<int>v;
        for(int ele: temp){
            v.push_back(ele);
        }
       sub.push_back(v);
        return;
    }
    
    temp.push_back(arr[i]);
    subsequence(i+1, arr, sub,temp);
    temp.pop_back();
    subsequence(i+1, arr, sub,temp);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> temp;
        subsequence(0,nums, v,temp);
        return v;
    }
};