class Solution {
public:
    int countStudent(vector<int>& arr, int pages){
    int students=1;
    long long pagePerStudent=0;
    for(auto it:arr){
        if(it+pagePerStudent<=pages){
            pagePerStudent+=it;
        }
        else{
            pagePerStudent=it;
            students++;
        }
    }
    return students;
}


    int splitArray(vector<int>& arr, int m) {
        int n= arr.size();
         int low= *max_element(arr.begin(), arr.end());
    int high=accumulate(arr.begin(), arr.end(), 0);
    if(m>n) return -1;
    if(n==m) return low;
    int ans=high;
    while(low<=high){
        int mid=(low+high)/2;
        if(countStudent(arr,mid)<=m){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
    }
};