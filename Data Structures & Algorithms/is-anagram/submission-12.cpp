class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) return false;

        unordered_map<char, int> um;
        unordered_map<char, int> umm;

        for (int i = 0; i < s.length(); i++) {
            um[s[i]]++;
        }
        for (int i = 0; i < t.length(); i++) {
            umm[t[i]]++;
        }

        if (um != umm) {
            return false;
        }

        return true;
    }
};
