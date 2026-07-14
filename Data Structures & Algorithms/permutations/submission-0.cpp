class Solution {
public:
     vector<vector<int>> res;
    
    void helper(vector<int>& nums, vector<int>& per,vector<bool>& pick)
    {
        if(per.size() == nums.size())
        {
            res.push_back(per);
            return;
        }
        for(int i = 0; i<nums.size(); i++)
        {
            if(!pick[i])
            {
                per.push_back(nums[i]);
                pick[i] = true;
                helper( nums,per,pick );
                per.pop_back();
                pick[i] = false;        

            }
        }


    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> per;
        vector<bool> pick(nums.size(), false);
        helper(nums,per,pick);
        return res;
    }
};
