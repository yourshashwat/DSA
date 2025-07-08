class Solution {
public:
    int maxValue(vector<vector<int>>& events, int k) {
        int n = events.size();
        sort(events.begin(), events.end(), [](const vector<int>& a, const vector<int>& b){
            return a[1] < b[1];
        });

        vector<int> endDays(n);
        for(int i = 0; i < n; i++) {
            endDays[i] = events[i][1];
        }

        vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

        for(int i = 1; i <= n; ++i) {
            int start = events[i - 1][0], end = events[i - 1][1], val = events[i - 1][2];
            int lastNonOverlap = upper_bound(endDays.begin(), endDays.end(), start - 1) - endDays.begin();

            for(int j = 1; j <= k; ++j) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j]);
                dp[i][j] = max(dp[i][j], dp[lastNonOverlap][j - 1] + val);
            }
        }

        return dp[n][k];
    }
};