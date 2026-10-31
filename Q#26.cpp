class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i+1]==nums[i]){
                nums[i]=nums[i+1];
                int k=i;
                for(int j=k;j<nums.size();j++){
                    nums[j]=nums[j+1];
                }
            }
        }
    return nums.size();
    }
};


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int k = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
