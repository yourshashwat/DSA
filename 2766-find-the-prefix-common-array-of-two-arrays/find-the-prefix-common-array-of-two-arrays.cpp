class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n= A.size();
        int count=0;
        vector<int> freq(n+1,0), pf(n);
        for(int i=0; i<n; i++){
            freq[A[i]]++;
            freq[B[i]]++;
            if(A[i]==B[i])count++;
            else{
                if(freq[A[i]]==2) count++;
                if(freq[B[i]]==2) count++;
            }
            pf[i]=count;
        }
        return pf;
    }
};