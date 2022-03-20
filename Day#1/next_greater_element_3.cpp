class Solution {
public:
    int nextGreaterElement(int n) {
        //i need to find the first smllest value from the right side
        string s = to_string(n);
        n = s.size();
        int i;
        //first need to find the dip
        for (i = n - 2; i >= 0; i--)
        {
            if (s[i] < s[i + 1])
            {
                break;
            }
        }
        int j;
        if (i < 0) return -1;
        //check for next greater element from right
        for (j = n - 1; j >= 0; j--)
        {
            if (s[j] > s[i])
            {
                break;
            }
        }
        swap(s[j], s[i]);
        sort(s.begin() + i + 1, s.end());
        long ans = stol(s, nullptr, 10);
        if (ans > INT_MAX) return -1;

        return ans;
    }
};