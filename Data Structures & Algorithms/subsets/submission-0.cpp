class Solution {
public:

void helper(vector<int>&  nums,vector<vector<int>>& res,int i, vector<int>& sub)
{ 
     if(i>=nums.size())
     {
      res.push_back(sub);
      return;
     }
       sub.push_back(nums[i]);
         helper(nums, res, i+1, sub);
         sub.pop_back();
         helper(nums, res, i+1, sub);



}
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> res;
        vector<int> sub;
        helper(nums, res, 0, sub);
        return res;

    }
};
