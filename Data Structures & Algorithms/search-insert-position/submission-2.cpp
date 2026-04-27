class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         int ans = -1;
        int left = 0, right = nums.size();
        int mid;
        if(nums[0]>target) return 0;
      
        while(left<=right)
        {
           mid = (left+right)/2;
           if(nums[mid] < target && nums[mid+1]>target)
           {
            ans = mid+1;
            break;
           }
           else if(nums[mid] == target)
           {
            ans = mid;
            break;
           }
           else if(target>nums[mid]) left = mid+1;
           else right = mid-1;
        }
        if(ans == -1) return nums.size();
        return ans;
    }
};