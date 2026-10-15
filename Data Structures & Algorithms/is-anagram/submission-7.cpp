class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int> count(26, 0);

        if (s.length() != t.length()) {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        return s == t;
    }
};
