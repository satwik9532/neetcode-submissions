class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l = 0, r = k-1;
        vector<int> result;
        while(r<nums.size())
        {
            int ma = INT_MIN;
            for(int i = l;i<=r;i++)
            {
                ma = max(ma,nums[i]);
            }
            result.push_back(ma);
            l++,r++;
        }
        return result;
    }
};
