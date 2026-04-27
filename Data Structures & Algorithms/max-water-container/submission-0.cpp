class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size()-1,height = 0,width = 0,ans = 0;
        while(i<j)
        {
            height = min(heights[i],heights[j]);
            width = j-i;
            ans = max(ans, height*width);

            if(heights[i]<heights[j]) i++;
            else j--;
        }

        return ans;
    }
};
