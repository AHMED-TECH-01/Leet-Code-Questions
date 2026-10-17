
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });

        int n = nums.size();
        long long sum = 0;

        for (int i = 0; i < n / 2; i++) {
            sum -= 1LL * nums[i] * nums[i];
        }

        for (int i = n / 2; i < n; i++) {
            sum += 1LL * nums[i] * nums[i];
        }

        return sum;
    }
};

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> squares;

        for (int x : nums) {
            squares.push_back(1LL * x * x);
        }

        sort(squares.begin(), squares.end());

        int n = squares.size();
        long long sum = 0;

        for (int i = 0; i < n / 2; i++) {
            sum -= squares[i];
        }

        for (int i = n / 2; i < n; i++) {
            sum += squares[i];
        }

        return sum;
    }
};
