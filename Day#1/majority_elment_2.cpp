/*

Problem Link - https://leetcode.com/problems/majority-element-ii/

*/


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int m1=INT_MAX,m2=INT_MAX;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(m1==nums[i])
            {
                cnt1++;
            }
            else if(m2==nums[i])
            {
                cnt2++;
            }
            else if(cnt1==0)
            {
                m1=nums[i];
                cnt1++;
            }
            else if(cnt2==0)
            {
                m2=nums[i];
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        // why not more than two majority element,bcus can't be three 
        cnt1=0;cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==m1) cnt1++;
            if(nums[i]==m2) cnt2++;
        }
        vector<int>ans;
        // cout<<cnt1<<" "<<cnt2<<endl;
        if(cnt1>n/3)
            ans.push_back(m1);
        if(cnt2>n/3)
            ans.push_back(m2);
        return ans;
    }
};