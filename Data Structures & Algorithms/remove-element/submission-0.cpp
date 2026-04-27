class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans = 1;
        for(int i =  0; i<nums.size();i++)
        {
            if(nums[i]==val) 
            {
                nums.erase(nums.begin() + i);
                i = i-1;
            }
            
        }

        return nums.size();
    }
};