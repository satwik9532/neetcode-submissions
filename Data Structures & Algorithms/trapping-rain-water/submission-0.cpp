class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(),res = 0;
        for(int i = 0; i<n; i++)
        {
            int lefthigh = height[i],righthigh = height[i];
            for(int j = 0; j<i;j++)
            lefthigh = max(lefthigh, height[j]);

            for(int j = i+1; j<n;j++)
            righthigh = max(righthigh, height[j]);

            res+= min(lefthigh,righthigh) - height[i];




        }

        return res;
    }
};
