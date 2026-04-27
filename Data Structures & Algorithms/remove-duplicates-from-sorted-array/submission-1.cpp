class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int k = 0,n = nums.size();
        // for(int i = 1; i<nums.size(); i++)
        // {
        //     if(nums[i] == nums[i-1])
        //     {
        //         nums.erase(nums.begin()+i);
        //         i = i-1;
        //         k++;
        //     }
        // }

        // return nums.size();
        int l = 1;
        for(int r = 1; r<nums.size(); r++)
        {
            if(nums[r] == nums[r-1])
            {
               continue;
           
            }
            nums[l++] = nums[r];
        }
        return l;
    }
};