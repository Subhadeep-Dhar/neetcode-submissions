class Solution {
public:
    int scoreOfString(string s) {
        if (s.length() == 0) return 0;
        if (s.length() == 1) return s[1];

        int sum = 0;
        int left = 0;

        for (int right = 1; right < s.length(); right++) {
            sum += abs((s[left] - '0') - (s[right] - '0'));
            left++;
        }

        return sum;
    }
};