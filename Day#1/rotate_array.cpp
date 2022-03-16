/*
Problem Link - https://leetcode.com/problems/rotate-array/
*/
class Solution {
public:
	void rev(vector<int>&nums, int st, int end)
	{
		while (st < end)
		{
			swap(nums[st++], nums[end--]);
		}
	}
	void rotate(vector<int>& nums, int k) {
		int n = nums.size();
		k %= n;
		// First need to reverse the whole array
		rev(nums, 0, n - 1);
		//need to revrse the first k element
		rev(nums, 0, k - 1);
		//now revrse from k to end
		rev(nums, k, n - 1);
		for (auto i : nums)
		{
			cout << i << " ";
		}



	}
};