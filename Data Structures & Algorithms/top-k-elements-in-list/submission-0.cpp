class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i = 0; i<nums.size(); i++ )
        mp[nums[i]]++;

        vector<vector<int>> v(nums.size() + 1);
        for(auto& i : mp)
        v[i.second].push_back(i.first);

        vector<int> res;
        for(int i = v.size() - 1; i>=0; i--)
        {
            for(int j = 0; j<v[i].size();j++ )
                res.push_back(v[i][j]);

            if(res.size() == k)
            return res;
        }

        return {};
    }
};
