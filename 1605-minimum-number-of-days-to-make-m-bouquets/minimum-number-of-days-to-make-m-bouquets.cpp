class Solution {
public:

    int countFlowers(vector<int> &arr, int k, int mid){
	int n= arr.size();
	int consecutiveFlowers=0;
	int count=0,i=0;
	while(i<n){
		if(arr[i]<=mid){
			count++;
		}
        else{
            count=0;
        }

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
	if((long long)k*(long long)m>n) return -1;
	int low=1, high=*max_element(arr.begin(), arr.end());

	while(low<=high){
		int mid=(low+high)/2;
		if(countFlowers(arr,k,mid)>=m){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return low;
    }
};