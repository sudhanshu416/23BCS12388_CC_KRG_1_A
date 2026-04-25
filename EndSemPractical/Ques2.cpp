class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        vector<unordered_map<int,int>> dp(n);
        dp[0][nums[0]]++;
        dp[0][-nums[0]]++;
        for(int i=1; i<n; i++){
            for(auto &[x,y]: dp[i-1]){
                dp[i][x+nums[i]] += y;
                dp[i][x-nums[i]] += y;
            }
        }
        return dp[n-1][target];
    }
};
