class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;
        int i=0;
        while(goal!=start  && i<32){
            if((start & (1<<i)) != (goal & (1<<i))){
               start= start^(1<<i);
                count++;
            }
            i++;
        }
        return count;
    }
};