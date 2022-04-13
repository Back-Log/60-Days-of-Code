class Solution {
public:
     vector<int>sortColors(vector<int>& a) {
        //we need to solve it in o(n) space
         int low=0,mid=0,high=a.size()-1;
         while(mid<=high)
         {
             if(a[mid]==0)
             {
                 swap(a[low],a[mid]);
                 low++;
                 mid++;
             }
             else if(a[mid]==1)
             {
                 mid++;
             }
             else if(a[mid]==2)
             {
                 swap(a[mid],a[high]);
                 high--;
             }
             
         }
         return a;
    }
};