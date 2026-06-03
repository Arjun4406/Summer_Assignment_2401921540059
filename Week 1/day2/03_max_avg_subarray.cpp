class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long wind_Sum = 0;

        
        for (int i = 0; i < k; i++) {
            wind_Sum += nums[i];
        }

        long long maxSum = wind_Sum;

        
        for (int i = k; i < nums.size(); i++) {
            wind_Sum += nums[i] - nums[i - k];
            maxSum = max(maxSum, wind_Sum);
        }

        return (double)maxSum / k;
    }
};