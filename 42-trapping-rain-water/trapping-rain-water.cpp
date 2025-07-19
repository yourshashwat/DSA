class Solution {
public:

    vector<int> getLeftMax(vector<int> &arr, int &n){
        vector<int>left(n);
        left[0]=arr[0];
        for(int i=1;i<n;i++){
            left[i]= max(left[i-1], arr[i]);
        }
        return left;
    }

    vector<int> getRightMax(vector<int> &arr, int &n){
        vector<int>right(n);
        right[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]= max(right[i+1], arr[i]);
        }
        return right;
    }

    int trap(vector<int>& arr) {
        int n= arr.size();
        vector<int> leftMax= getLeftMax(arr,n);
        vector<int> rightMax= getRightMax(arr,n);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+= min(leftMax[i], rightMax[i])-arr[i];
        }
        return sum;
    }
};