class Solution {
public:

    int countFlowers(vector<int> arr, int k, int mid){
	int n= arr.size();
	vector<int> b(n);
	for(int i=0; i<n;i++){
		if(arr[i]<= mid){
			b[i]=1;
		}
	}
	int consecutiveFlowers=0;
	int count=0,i=0;
	while(i<n){
		if(b[i]==1){
			count++;
		}
		if(b[i]==0) count=0;
		if(count==k){
			consecutiveFlowers++;
			count=0;
		}
		i++;
	}
	//cout<<consecutiveFlowers<<endl;
	return consecutiveFlowers;
    }

    int minDays(vector<int>& arr, int m, int k) {
        int n= arr.size();
        long long need=(long long)k*(long long)m;
	if(need>n) return -1;
	int low=1, high=*max_element(arr.begin(), arr.end()), ans=-1;

	while(low<=high){
		int mid=(low+high)/2;
		if(countFlowers(arr,k,mid)>=m){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
    }
};