class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // the idea is to use one array and one variable to solve thi problem
        int n=size(nums);
        vector<int>ans(n);
        ans[0]=1;
        for(int i=1;i<n;i++)
        {
            ans[i]=ans[i-1]*nums[i-1];
        }
        int prod=1;
        for(int i=n-2;i>=0;i--)
        {
            ans[i+1]=ans[i+1]*prod;
            prod=prod*nums[i+1];
        }
        ans[0]=ans[0]*prod;
        
        return ans;
        
    }
};
