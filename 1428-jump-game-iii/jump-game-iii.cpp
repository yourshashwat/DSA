class Solution {
public:
    //  vector<bool> lCheck{50001, false};
    //  vector<bool> rCheck{50001, false};
    vector<bool> lCheck = vector<bool>(50001, false);
    vector<bool> rCheck = vector<bool>(50001, false);
    bool solve(vector<int>& arr, int n, int idx){
        if(arr[idx]==0) return true;
        bool leftPath=false;
        bool rightPath=false;

        if(!lCheck[idx] && idx-arr[idx]>=0){
            lCheck[idx]= true;
            leftPath= solve(arr,n, idx-arr[idx]);
        } 
        if(!rCheck[idx] && idx+arr[idx]<=n-1) {
            rCheck[idx]= true;
            rightPath= solve(arr,n , idx+arr[idx]);

        }
        return leftPath|| rightPath;

    }

    bool canReach(vector<int>& arr, int start) {
        int n= arr.size();
        return solve(arr,n,start);
    }
};