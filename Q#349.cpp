class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> s;
        unordered_set<int> ans;

        for (int i = 0; i < nums1.size(); i++) {
            s.insert(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++) {

            if (s.find(nums2[i]) != s.end()) {
                ans.insert(nums2[i]);
            }
        }

        return vector<int>(ans.begin(), ans.end());
    }
};



class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans;

        int i = 0;
        int j = 0;

        while (i < nums1.size() && j < nums2.size()) {

            if (nums1[i] == nums2[j]) {

                if (ans.empty() || ans.back() != nums1[i]) {
                    ans.push_back(nums1[i]);
                }

                i++;
                j++;
            }
            else if (nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        return ans;
    }
};