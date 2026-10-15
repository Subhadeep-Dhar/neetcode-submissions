class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int max = INT_MIN;

        for (int i = arr.size()-1; i >= 0; i--) {
            int current = arr[i];
            
            if (current > max) {
                arr[i] = max;
                max = current;
            }
            else {
                arr[i] = max;
            }
        }

        arr[arr.size()-1] = -1;

        return arr;
    }
};