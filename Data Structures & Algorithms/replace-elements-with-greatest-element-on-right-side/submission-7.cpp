class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int max = INT_MIN;

        for (int i = arr.size()-1; i >= 0; i--) {
            int current = arr[i];
            cout << "Current : " << current << "\n";
            cout << "Max : " << max << "\n";
            
            if (current > max) {
                arr[i] = max;
                max = current;
                cout << "Current : " << current << "\n";
                cout << "Max : " << max << "\n";
            }
            else {
                arr[i] = max;
            }
            for (int i : arr) {
                cout << i << " ";
            }

            cout << "\n\n";
        }

        arr[arr.size()-1] = -1;

        return arr;
    }
};