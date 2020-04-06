class Solution {
public:
    int Sum_Solution(int n) {
        int ans = n;
        n && (ans += Sum_Solution(n - 1));
        return ans;
    }
};
