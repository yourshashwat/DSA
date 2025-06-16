class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr, vector<int>& b) {
        arr.insert(arr.end(), b.begin(), b.end());
	int n=arr.size();
	sort(arr.begin(), arr.end());
	// for(auto it:arr)
	// std::cout<<it<<" ";
	
	if(n%2==0){
		return (double)(arr[n/2-1]+arr[n/2])/(double)2.0;
	}
	else{
		return arr[n/2];
	}
    }
};