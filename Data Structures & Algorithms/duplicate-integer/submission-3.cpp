class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size(), x;

        for(int i = 0; i < n; i++) {
            x = nums[i];
            for(int j = i+1; j < n; j++) {
                if(nums[j] == x) {
                    return true;
                }
            }
        }
        return false;
    }
};