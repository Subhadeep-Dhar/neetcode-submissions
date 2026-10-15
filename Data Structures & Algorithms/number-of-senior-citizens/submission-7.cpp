class Solution {
public:
    int countSeniors(vector<string>& details) {

        int x;
        int count = 0;

        for (int i = 0; i < details.size(); i++) {
            if (((details[i][11] - '0') * 10) + (details[i][12] - '0') > 60) count++;
            // string age = "";
            // for (int j = 0; j < details[i].length(); j++) {
            //     if (!isdigit(static_cast<unsigned char>(details[i][j]))) {
            //         age += (to_string((details[i][j+1]) - '0')) + (to_string((details[i][j+2]) - '0'));
            //         stringstream ss(age);
            //         ss >> x;
            //         if (x > 60) {
            //             count++;
            //         }
            //     }
            // }
        }

        return count;
    }
};