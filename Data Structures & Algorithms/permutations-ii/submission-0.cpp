class Solution {
public:
    set<vector<int>>res;
   void backtrack(vector<int>& nums, vector<bool>& visited, vector<int>& per)
    {
        if(per.size() == nums.size())
        {
            res.insert(per);
            return;
        }

        for(int i = 0; i<nums.size(); i++)
        {
            if(!visited[i])
            {
                per.push_back(nums[i]);
                visited[i] = true;
                backtrack(nums, visited, per);
                visited[i] = false;
                per.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<bool> visited(nums.size(), false);
        vector<int> per;
        backtrack(nums, visited, per);
        return vector<vector<int>>(res.begin(), res.end());
    }
};