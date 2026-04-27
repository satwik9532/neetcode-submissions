class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -1;
        int left = 0, right = nums.size();
        int mid;
        while(left<=right)
        {
           mid = (left+right)/2;
           if(nums[mid] == target)
           {
            ans = mid;
            break;
           }
           else if(target>nums[mid]) left = mid+1;
           else right = mid-1;
        }
        return ans;
    }
};
