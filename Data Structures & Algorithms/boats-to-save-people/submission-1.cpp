class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int l = 0, r = people.size()-1,ans = 0, picked = 0;

        while(l<r)
        {
            if(people[l] + people[r] <= limit)
            {
                ans++;
                l++, r--;
                picked+= 2;
            }
            else if(people[r]>= limit)
            {
                ans++;
                r--;
                picked+= 1;
            }
            else{
                ans++;
                r--;
                 picked+= 1;
            }

        }
        if(picked!= people.size() ) ans+= people.size() - picked;
        return ans;
    }
};