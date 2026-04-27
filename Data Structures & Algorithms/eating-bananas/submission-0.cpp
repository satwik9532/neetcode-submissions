class Solution {
public:
    bool helper(int k,vector<int>& piles,int h)
    {
      //  if(k>h) return false;
        double totaltime=0;
        for(int i = 0; i<piles.size();i++)
        {
            totaltime+= ceil((double)piles[i]/(double)k);
            if(totaltime>h) return false;
        }
      
     
        return true;
       
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxs = 0, ans = INT_MAX;
        for(int i = 0; i<piles.size(); i++)
        {
            maxs = max(maxs, piles[i]);
        }

        int l = 0, r = maxs;

        while(l<=r)
        {
            int m = (l+r)/2;
            if(helper(m,piles,h))
            {
                ans = min(ans,m);
                r = m-1;
            }
            else l = m+1;
        }

        return ans;

    }
};
