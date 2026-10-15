class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = 0;

        while (isspace(s.back())) {
            s.pop_back();
        }

        for (int i = s.length(); i >= 0; i--) {
            if (isspace(s[i])) return l-1;
            l++;
        }

        return l-1;
    }
};