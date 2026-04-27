class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mp;
        int l = 0,r=0,ans = 0;

        while(l<s.size() && r<s.size())
        {
            
            while(mp.find(s[r])!= mp.end())
            {
                mp.erase(s[l]);
                l++;
            }

            mp.insert(s[r]);
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
