xclass Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        
        int ans=0;
        int curr_max=nums[0];
        int window=0;
        for(int i=0;i<size(nums);i++)
        {
            curr_max=max(curr_max,nums[i]);
            if(nums[i]>=left and nums[i]<=right)
            {
                ans++;
            }
            if(curr_max>=left and curr_max<=right)
            {
             window++;   
            }
            else
            {
                int total=window*(window-1)/2;
                ans+=(total);
                window=0;
                curr_max=-1;
            }
            
            
        }
        cout<<ans;
         int total=window*(window-1)/2;
        ans+=(total);
        
        return ans;
    }
};
