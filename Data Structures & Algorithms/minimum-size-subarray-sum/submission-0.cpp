class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res  = INT_MAX;

        for(int i = 0; i<nums.size(); i++)
        {   int sum = 0;
            for(int j = i; j<nums.size();j++)
            {
                sum+= nums[j];
                if(sum>=target)
                res = min(res,(j-i+1));

            }
        }
        return res == INT_MAX ? 0:res;
    }
};