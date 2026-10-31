
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = nums[0];

        for (int i = 0; i < n; i++) {
            int currentSum = 0;

            for (int j = i; j < n; j++) {
                currentSum += nums[j];
                maxSum = max(maxSum, currentSum);
            }
        }

        return maxSum;
    }
};


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
