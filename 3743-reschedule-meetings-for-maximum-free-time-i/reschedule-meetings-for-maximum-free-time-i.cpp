class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
      if(eventTime>endTime.back()){
            startTime.push_back(eventTime);
            endTime.push_back(eventTime);
        }
        int n = startTime.size();
        int max_sum = 0;
        int win_sum = 0;

        int pos = 0;
        int last_end = 0;
        deque<int> dq;
        while(pos<n){
            win_sum += (startTime[pos]-last_end);
            max_sum = max(max_sum,win_sum);
            dq.push_back(startTime[pos]-last_end);
            if(dq.size()>k){
                win_sum -= dq.front();
                dq.pop_front();
            }
            last_end = endTime[pos];
            pos++;
        }
        return max_sum;
    }
};