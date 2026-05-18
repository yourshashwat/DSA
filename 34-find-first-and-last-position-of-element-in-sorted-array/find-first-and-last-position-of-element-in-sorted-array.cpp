class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int lb=-1, ub=-1, n= arr.size(), low=0, high=n-1, ans=-1;
        while(low<=high){
            int mid= (low+high)/2;
            if(arr[mid]>=target){
                lb=mid;
                high=mid-1;
            }
            else low= mid+1;
        }
        low=0; high=n-1;
        while(low<=high){
            int mid= (low+high)/2;
            if(arr[mid]<=target){
                ub=mid;
                low= mid+1;
            }
            else high= mid-1;
        }
        if(lb!= -1 && arr[lb]!=target) lb=-1;
        if(ub!= -1 && arr[ub]!= target) ub=-1; 
        return {lb,ub};
    }
};