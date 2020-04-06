class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        vector<int> dp(array.size());
        dp[0]=array[0];
        int ans=dp[0];
        for(int i =1;i<array.size();i++){
            dp[i]=dp[i-1]+array[i]>array[i]?dp[i-1]+array[i]:array[i];
            ans=dp[i]>ans?dp[i]:ans;
        }
        return ans;
    }
};
