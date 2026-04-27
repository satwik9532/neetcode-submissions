class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int count = 1,ans = 1;

        for(int i = 1; i<nums.size(); i++)
        {
            if(nums[i-1] == nums[i]) continue;
            if((nums[i-1] + 1) == nums[i] )
            {
                count++;
            }

            else {
                ans = max(ans,count);
              
                count = 1;
            }
            
        }
        return max(ans,count);
    }
};
