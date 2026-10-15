class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int max = INT_MIN;
        int i = 0;

        int count = 0;

        while (i < nums.size()) {
            if (nums[i] == 1) {
                count++;
                i++;
                if (count > max) max = count;
            }
            else {
                if (count > max) max = count;
                count = 0;
                i++;
            }
        }

        return max;
    }
};