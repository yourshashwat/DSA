int countPainters(vector <int> &boards, int mid){
    int painted=0, painters=1;
    for(auto it:boards){
        if(it+painted<=mid){
            painted+=it;
        }
        else{
            painted=it;
            painters++;
        }
    }
    return painters;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int n= boards.size();
    int low= *max_element(boards.begin(), boards.end());
    int high= accumulate(boards.begin(), boards.end(),0);
    if(k==1) return high;
    if(k==n) return low;
    while(low<=high){
        int mid=(low+high)/2;
        if(countPainters(boards,mid)<=k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}
