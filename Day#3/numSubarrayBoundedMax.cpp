class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        
      // main idea is do consider the element that are lesser than left it may be used in future 
        
        
        int ans=0;
        int st=-1,end=-1;
        for(int i=0;i<nums.size();i++)
        {
             if(nums[i]>right)
             {
                 //reset start and end
                 st=end=i;
             }
            else if(nums[i]>=left)
            {
                end=i;
            }
            ans+=(end-st);
            
        }
        
        return ans;
        
    }
};