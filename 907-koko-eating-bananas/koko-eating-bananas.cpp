class Solution {
public:
    long long requiredTime(vector<int>& piles, int t){
        long long totalTime=0;
        for(int i=0;i<piles.size();i++){
            totalTime+= (piles[i]+t-1)/t;
            // cout<<totalTime<<endl;
        }
        return totalTime;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high=*max_element(piles.begin(),piles.end());
        int low=1,ans=1;
        while(low<=high){
            int mid=(low+high)/2;
            if(requiredTime(piles,mid)<=h){
                ans=mid;
                high=mid-1;
            }
            else if(requiredTime(piles,mid)>h){
                low=mid+1;
            }
        }
        return ans;
    }
};