/*

Problem Link - https://leetcode.com/problems/majority-element/

*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
      //moore's voting algo
      int ans=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                ans=nums[i];
            }
            if(ans==nums[i])
            {
                count++;
            }
            else count--;
            
        }
        return ans;
    }
};