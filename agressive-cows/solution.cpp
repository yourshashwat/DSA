bool canAccomodate(vector<int> &stalls, int cows, int minD){
    int noOFCows=1,last=stalls[0];
    for(int i=0; i<stalls.size();i++){
        if(stalls[i]-last>=minD){
            noOFCows++;
            last=stalls[i];
        }
        if(noOFCows>=cows) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int n=stalls.size();
    sort(stalls.begin(), stalls.end());
    int low=1;
    int high=stalls[n-1]-stalls[0];
    while(low<=high){
        int mid=(low+high)/2;
        if(canAccomodate(stalls,k,mid)){
            low=mid+1;
        }
        else high=mid-1;
    }

    return high;

}

