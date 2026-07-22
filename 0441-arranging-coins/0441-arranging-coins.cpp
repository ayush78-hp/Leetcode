class Solution {
public:
    int arrangeCoins(int n) {
        long long left = 1, right = 65536;
        long long ans = INT_MIN;

        while (left <= right) {
            long long mid = left + (right - left) / 2;

            long long temp = (mid * (mid + 1)) / 2;

            if (temp > n) {
                right = mid - 1;
            } else {
                ans = max(ans, mid);
                left = mid + 1;
            }
        }

        return ans;
    }
};