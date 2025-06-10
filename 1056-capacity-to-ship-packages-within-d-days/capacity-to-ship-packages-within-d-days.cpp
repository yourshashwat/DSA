class Solution {
public:
    int requiredDays(vector<int>& weights, int capacity){
        int n= weights.size();
        int days=1, load=0;
        for(auto it: weights){
            if(load+it<=capacity){
                load+=it;
            }
            else{
                load=it;
                days++;
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        int n= weights.size();
        if(n==0) return 0;
        int low=*max_element(weights.begin(), weights.end());
        int high= n*low;
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(requiredDays(weights,mid)<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};