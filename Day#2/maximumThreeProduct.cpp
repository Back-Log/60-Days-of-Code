class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int mx = arr[0] * arr[1] * arr[2];
        mx = max(mx, arr[n - 1] * arr[n - 2] * arr[n - 3]);
        int pos = arr[n - 1];
        mx = max(mx, arr[0] * arr[1] * pos);
        return mx;

    }
};