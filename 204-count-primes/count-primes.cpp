class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<int> prime(n+1,1);
        int count=0;
        for(int i=2; i<n; i++){
            if(prime[i]==1){
                count++;
                for(long long j=(long long)i*i; j<n; j+=i)
                prime[j]=0;
            }
        }
        return count;
    }
};