
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (!isalnum(s[left])) {
                left++;
            }
            else if (!isalnum(s[right])) {
                right--;
            }
            else {
                if (tolower(s[left]) != tolower(s[right])) {
                    return false;
                }

                left++;
                right--;
            }
        }

        return true;
    }
};



class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        stack<char> st;

        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
                st.push(tolower(c));
            }
        }

        for (char c : cleaned) {
            if (c != st.top()) {
                return false;
            }

            st.pop();
        }

        return true;
    }
};
