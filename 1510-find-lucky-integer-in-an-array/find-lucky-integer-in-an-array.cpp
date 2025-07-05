class Solution {
public:
    int findLucky(vector<int>& arr) {
         int maxi=0;
        unordered_map <int, int> mp;
        for(int i: arr){
            mp[i]++;
            // if(i==mp[i]){
            //     maxi=max(i,maxi);
            // }
            // if(mp[i]>i && maxi){

            // }
        }
        for (auto& pair : mp) {
        if(pair.first==pair.second){
            maxi=max(maxi,pair.first);
        }
    }
        return maxi==0?-1:maxi;
    }
};