class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.length() - 1;

        // s.erase(remove(s.begin(), s.end(), ' '), s.end());


        while (left < right) {

            while (!isalnum(s[left]) && left < right) left++;
            while (!isalnum(s[right]) && right > left) right--;

            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
