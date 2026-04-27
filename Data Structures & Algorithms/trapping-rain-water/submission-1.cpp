class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size()-1;
        int lefthigh = 0, righthigh = 0;
        int ans = 0;

        while(l<r)
        {
            if(height[l]<height[r])
            {
                if(height[l]>=lefthigh) lefthigh = height[l];
                else ans+= lefthigh - height[l];
                l++;

            }
            else
             {
                if(height[r]>=righthigh) righthigh = height[r];
                else ans+= righthigh - height[r];
                r--;

            }

        }
        return ans;
    }
};
