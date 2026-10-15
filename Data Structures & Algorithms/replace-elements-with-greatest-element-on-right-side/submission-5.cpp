class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n;
        for(int i = 0; i < arr.size()-1; i++) {
            n = arr[i+1];
            for(int j = i+1; j < arr.size(); j++) {
                if(arr[j] > n) {
                    n = arr[j];
                }   
            }
            arr[i] = n;
        }

        n = arr.size() - 1;

        arr[n] = -1;

        return arr;
    }
};