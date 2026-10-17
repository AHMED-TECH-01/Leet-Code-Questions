class Solution {
public:
    int mySqrt(int n) {
        if (n < 0)
        return -1;

    if (n == 0)
        return 0;

    double x = n;

    while (true) {
        double next = (x + n / x) / 2;

        if (next == x)
            return x;

        x = next;
    }
    }
};