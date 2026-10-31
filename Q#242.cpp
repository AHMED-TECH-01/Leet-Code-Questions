
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        for (int i = 0; i < s.length(); i++) {
            bool found = false;

            for (int j = 0; j < t.length(); j++) {
                if (s[i] == t[j]) {
                    t[j] = '#';
                    found = true;
                    break;
                }
            }

            if (!found) return false;
        }

        return true;
    }
};


class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        int freq[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
