class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        vector<int> res;
        for(int i = 0; i<nums.size(); i++)
        {
            int minele = INT_MAX;
            for(int j = i+1;j<nums.size(); j++)
            {
                if(nums[j]<nums[i])
                {
                    swap(nums[i],nums[j]);
                }
            }
        }

        return nums;
    }
};