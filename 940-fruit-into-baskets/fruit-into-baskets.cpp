// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         int n= fruits.size();
//         if(n==1 || n==2) return n;
//         int count=0;
//         int i=0, j=0;
//         unordered_map<int,int>mp;
//         while(j<n){
//             mp[fruits[j]]++;
//             if(mp.size()>2){
//                 mp[i]--;
//                 if(mp[fruits[i]]==0) mp.erase(fruits[i]);
//                 i++;
//             }
//             else{
//                 count=max(j-i+1, count);
//             }
//             j++;

//         }
//         return count;
//     }
// };


class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();

        unordered_map<int, int> mp;

        int i = 0;
        int j = 0;
        int count = 0;

        while(j < n) {
            mp[fruits[j]]++;

            if(mp.size() <= 2) {
                count = max(count, j-i+1);
            } else {
                mp[fruits[i]]--;
                if(mp[fruits[i]] == 0)
                    mp.erase(fruits[i]);
                i++;
            }

            j++;
        }
        return count;
    }
};