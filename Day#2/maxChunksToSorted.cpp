class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        //the idea is very simple ,we have to set the maximum value to their respective index
        int ans = 0;
        int mx = -1;
        for (int i = 0; i < arr.size(); i++)
        {
            mx = max(mx, arr[i]);
            if (mx == i) ans++;
        }
        return ans;
    }
};