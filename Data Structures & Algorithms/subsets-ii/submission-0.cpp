class Solution {
public:
  set<vector<int>> res;

  void backtrack(vector<int>& nums,vector<int>& sub, int i)
  {
    if(i == nums.size())
    {
        res.insert(sub);
        return;
    }
    sub.push_back(nums[i]);
    backtrack(nums,sub,i+1);
    sub.pop_back();
    backtrack(nums,sub,i+1);

  }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> sub;
        sort(nums.begin(), nums.end());
        backtrack(nums,sub,0);
        return vector<vector<int>>(res.begin(), res.end());
    }
};
