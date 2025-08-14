class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max1=arr[0], max2=-1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>max1){
                max2=max1;
                max1=arr[i];
                continue;
            }
            if(arr[i]>max2 && max1!=arr[i])
            max2=arr[i];
        }
        return max2;
        
    }
};