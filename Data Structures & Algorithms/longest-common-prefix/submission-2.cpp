class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.size() == 0) return "";
        
        sort (strs.begin(), strs.end());
        string first = strs.front();
        string last = strs.back();
        int i = 0;

        while (i < first.length() && i < last.length() && first[i] == last[i]) {
            i++;
        }

        return strs[0].substr(0, i);
    }
};