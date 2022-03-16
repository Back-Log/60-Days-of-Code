/*

Problem Link - https://leetcode.com/problems/squares-of-a-sorted-array/

*/
class Solution {
public:
	vector<int> sortedSquares(vector<int>& nums) {

		vector<int>ans;
		int st = 0, e = nums.size() - 1;
		cout << nums[e];
		while (st <= e)
		{
			int val1 = nums[st] * nums[st];
			int val2 = pow(nums[e], 2);
			if (val1 > val2)
			{
				ans.push_back(val1);
				st++;
			}
			else
			{
				ans.push_back(val2);
				e--;
			}

		}
		int n = ans.size();
		for (int i = 0; i < n / 2; i++)
		{
			swap(ans[i], ans[n - 1 - i]);
		}
		return ans;

	}
};

