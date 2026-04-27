class Solution {
public:
    bool helper(vector<int>& nums,int m, int k)
    {
        int subarray = 1, currsum = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            currsum+= nums[i];
            if(currsum> m)
            {
                subarray++;
                if(subarray>k) return false;
                currsum = nums[i];
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        
        int l = 0, r = 0,ans = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            l = max(l,nums[i]);
            r+= nums[i];
        }

        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(helper(nums, mid, k))
            {
                ans = mid;
                r = mid - 1;
            }
            else l = mid+1;

        }
        return ans;
    }
};