class Solution {
public:
    bool helper(int k,vector<int>& weights, int days)
    {
        int cnt = 1,  sum = 0, temp = k;
        for(int i = 0; i<weights.size(); i++)
        {
             if(temp-weights[i]<0)
             {
                cnt++;
             temp = k;
            
             }
             temp = temp - weights[i];

        
        }
        if(cnt<= days) return true;
        return false;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int l = 0, r = 0;
        for(int i = 0; i<weights.size(); i++)
        {
            l = max(l,weights[i]);
            r+= weights[i];
        }
        int ans = INT_MAX;
        while(l<=r)
        {
            int m = (l+r)/2;
            if(helper(m,weights,days))
            {
                ans = min(ans,m);
                r = m-1;
            }
            else l = m+1;
        }
        return ans;
    }
};