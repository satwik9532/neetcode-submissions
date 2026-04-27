class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>ma;
        int startIdx = -1, minLen = INT_MAX,cnt = 0, n = t.size();
        int l = 0, r = 0;
        for(int i= 0; i<t.size();i++) ma[t[i]]++;

        while(r<s.size())
        {
            if(ma[s[r]]>0)
            {
                cnt++;
              
            }
             ma[s[r]]--;

            while(cnt == n)
            {
            //    minLen = min(minLen, r-l+1);
                if(minLen>(r-l+1))
                {
                startIdx = l;
                minLen = r-l+1;
                }
                ma[s[l]]++;
                if(ma[s[l]]>0)
                {
                    cnt--;
                }
                l++;

            }
            r++;
          
          
        }

        if(startIdx == -1) return "";
        else return s.substr(startIdx,minLen);
    
    }
};
