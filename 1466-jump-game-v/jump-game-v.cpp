class Solution {
public:
    int t[1001];
    int solve(vector<int> &arr, int n, int d, int idx){
        if(t[idx]!=-1) return t[idx];
        int maxJumps=1;
        for(int i=1; i<=d && idx-i>=0; i++){
            if(arr[idx]>arr[idx-i])
            maxJumps= max(maxJumps,solve(arr, n, d, idx-i)+1);
            else break;
        }
        for(int i=1; i<=d && idx+i<n; i++){
            if(arr[idx]>arr[idx+i])
            maxJumps= max(maxJumps,solve(arr, n, d, idx+i)+1);
            else break;
        }
        t[idx]= maxJumps;
        return t[idx];
    }

    int maxJumps(vector<int>& arr, int d) {
        int n=arr.size();
        memset(t, -1, sizeof(t));
        int ans=0;
        for(int i=0; i<n; i++)
        ans= max(solve(arr,n,d,i), ans);
        return ans;
    }
};