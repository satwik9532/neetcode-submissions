class Solution {
public:


    void merge(vector<int>& nums, int l,int m, int r)
    {
        int i = l, j = m+1;
        vector<int> temp;

        while(i<=m && j<=r)
        {
            if(nums[i] < nums[j]) 
            {
            temp.push_back(nums[i++]);
            }
            else
            {
                 temp.push_back(nums[j++]);
            }
        }

        while(i<=m) temp.push_back(nums[i++]);
        while(j<=r) temp.push_back(nums[j++]);

        for(int k = l; k<=r; k++)
        {
            nums[k] = temp[k-l];
        }
    }

    void divide(vector<int>& nums,int l,int r)
    {
        if(l == r) return; 
        int m = (l+r)/2;

        divide(nums,l,m);
        divide(nums,m+1,r);

        merge(nums,l,m,r);
        
    }

    vector<int> sortArray(vector<int>& nums) {
        
        divide(nums,0,nums.size() - 1);
        return nums;
    }
};