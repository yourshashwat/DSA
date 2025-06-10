class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n= arr.size();
         int count=0, index=0,i=1;
        while(count<k && index<n){
        if(arr[index]==i){
            i++; index++;
        }
        else{
            count++; i++;
        }
    }
    if(count<k){
        return arr[n-1]+k-count;
    }
    else return i-1;
    }
};