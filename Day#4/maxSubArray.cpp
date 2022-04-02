// Kadan's Algo
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int mx=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            mx=max(mx,sum);
            if(sum<0) sum=0;
            
        }
        return mx;
    }
};
//O(n) extra approch
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        // ans[0]=(nums[0]>0)?nums[0]:0;
        ans[0]=nums[0];
        int curr=ans[0];
        for(int i=1;i<n;i++)
        {
            ans[i]=max(nums[i],nums[i]+ans[i-1]);
            
        }
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,ans[i]);
            //cout<<nums[i]<<" ";
        }
        return mx;
    }
};