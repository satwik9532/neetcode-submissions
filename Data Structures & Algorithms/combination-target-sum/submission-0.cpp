class Solution {
public:
    vector<vector<int>> res;

    void dfs(vector<int>& nums, int target, vector<int>& sub, int i)
    {
        if (target==0)
        {
            res.push_back(sub);
            return;
        }
        if(target<0 || i>=nums.size())
        return;

      sub.push_back(nums[i]);
      dfs(nums, target - nums[i],sub, i);
      sub.pop_back();
      dfs(nums, target,sub, i+1);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> sub;
        dfs(nums, target, sub,0);
        return res;

    }
};
