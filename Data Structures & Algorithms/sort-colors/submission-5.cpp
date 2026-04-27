class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, ones = 0, two = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] == 0) zero++;
            if(nums[i] == 1) ones++; 
            if(nums[i] == 2) two++;
        }
        for(int i = 0; i<nums.size(); i++)
        {
            if(zero!=0){
                nums[i] = 0;
                zero--;
            }
            else if(ones!=0){
                nums[i] = 1;
                ones--;
            }
            else if(two!=0){
                nums[i] = 2;
                two--;
            }
        }
    }
};