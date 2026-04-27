class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> leftProd(nums.size(),1), rightProd(nums.size(),1);
        leftProd[0] = 1, rightProd[nums.size()-1] = 1;

        for(int i = 1,j = nums.size()-2; i<nums.size(), j>=0; i++,j--)
        {
            leftProd[i] = leftProd[i-1] * nums[i-1];
            rightProd[j] = rightProd[j+1] * nums[j+1];
        }

        vector<int> ans;
        for(int i =0; i< nums.size(); i++)
        {
            ans.push_back(leftProd[i] * rightProd[i]);
        }

    return ans;
    }
};
