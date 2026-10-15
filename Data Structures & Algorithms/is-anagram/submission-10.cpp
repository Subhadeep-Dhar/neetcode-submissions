class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char,int> temp;
        unordered_map<char,int> temp2;

        for (int i = 0; i < s.length(); i++) {
            temp[s[i]]++;
        }

        for (int i = 0; i < t.length(); i++) {
            temp2[t[i]]++;
        }

        if (temp != temp2) return false;

        return true;
    }
};
