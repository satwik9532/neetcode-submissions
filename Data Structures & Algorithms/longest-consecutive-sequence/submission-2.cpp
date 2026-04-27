class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // if(nums.size() == 0) return 0;
        // sort(nums.begin(), nums.end());
        // int count = 1,ans = 1;

        // for(int i = 1; i<nums.size(); i++)
        // {
        //     if(nums[i-1] == nums[i]) continue;
        //     if((nums[i-1] + 1) == nums[i] )
        //     {
        //         count++;
        //     }

        //     else {
        //         ans = max(ans,count);
              
        //         count = 1;
        //     }
            
        // }
        // return max(ans,count);


        unordered_set<int>numset(nums.begin(), nums.end());
        int longest = 0;
        for(int num: numset)
        {
            if(numset.find(num - 1) == numset.end())
            {
                int lenght = 1;
                while(numset.find(num+lenght)!=numset.end())
                {
                    lenght++;
                }

                longest = max(longest,lenght);
            }
        }

        return longest;
    }
};
