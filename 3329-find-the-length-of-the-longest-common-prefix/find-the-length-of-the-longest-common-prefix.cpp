class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {

        unordered_set<int> st;
        for(int x:arr1){
            while(!st.count(x) && x>0){
                st.insert(x);
                 x=x/10;
            }
           
        }

        int result=0;
        for(int n: arr2){
            while(!st.count(n) && n>0){
                n=n/10;
            }
            if(n>0){
                result= max(result, int(log10(n)+1));
            }
        }
        return result;







        // int m= arr1.size(), n= arr2.size();
        // sort(arr1.begin(), arr1.end());
        // sort(arr2.begin(), arr2.end());
        // // for(int x: arr1) cout<<x<<" ";
        // // cout<<endl;
        // //  for(int x: arr2) cout<<x<<" ";
        // // cout<<endl;
        
        // int maxi=0;
        // for(int i=m-1; i>=0; i--){
        //     string str1= to_string(arr1[i]);
        //     for(int j=n-1; j>=0; j--){
        //         string str2= to_string(arr2[j]);
        //        // cout<<"pair: "<<str1<<","<<str2<<endl;
        //         int count=0;
        //         for(int k=0; k<min(str1.size(), str2.size()); k++){
        //             if(str1[k]== str2[k]){
        //                 count++;
        //                 //cout<<"count: "<<count<<endl;
        //                 maxi=max(maxi,count);
        //             }
        //             else{
        //                 maxi=max(maxi,count);
        //                 if(i==0 )
        //                 if(i>0 && j>0 && maxi>= min(to_string(arr1[i-1]).size(), to_string(arr2[j-1]).size())) return maxi;
        //                 break;
        //             }
        //         }

        //     }
        // }
        // return maxi;
    }
};