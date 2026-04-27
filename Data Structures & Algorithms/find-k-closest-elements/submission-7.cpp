class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int idx = lower_bound(arr.begin(), arr.end(),x) - arr.begin();
        int right = idx;
        int left = right - 1, n = arr.size();

        while(k--)
        {
            if(right >=  n)
            {
                ans.push_back(arr[left--]);
            }
           else if(left<0)
            {
                ans.push_back(arr[right++]);
            }
            else
            {
                int leftdiff = abs(arr[left]-x);
                int rightdiff = abs( arr[right]- x);
                if(leftdiff<=rightdiff)
                {
                    ans.push_back(arr[left--]);
                }
                else{
                    ans.push_back(arr[right++]);
                }

            }
        }
        sort(ans.begin(),ans.end());
        return ans;

        
    }
};