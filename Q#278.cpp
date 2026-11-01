// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        
        while (low < high) {
            // Prevents integer overflow compared to (low + high) / 2
            int mid = low + (high - low) / 2; 
            
            if (isBadVersion(mid)) {
                high = mid; // The first bad version is mid or to the left
            } else {
                low = mid + 1; // mid is good, so the first bad version must be to the right
            }
        }
        
        return low; // low and high converge to the first bad version
    }
};
