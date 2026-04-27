class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int res = 0;

        for(int i = 1; i<=n; i++)
        {
           if( find(nums.begin(), nums.end(), i) != nums.end())
           { 
            res = max(res,nums[i-1]);
             continue;
           }
           else return i;
        }

        sort(nums.begin(), nums.end());
        return res+1;
    }
};