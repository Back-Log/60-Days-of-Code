class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        // lets find the two maximum element in the array
        int maxOne = -1, maxTwo = -1, idx = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > maxOne)
            {
                maxTwo = maxOne;
                maxOne = nums[i];
                idx = i;
            }
            else if (nums[i] > maxTwo)
            {
                maxTwo = nums[i];
            }
        }
        if (maxOne >= 2 * maxTwo) return idx;
        return -1;

    }
};