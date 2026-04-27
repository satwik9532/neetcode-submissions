class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(), s1.end());
       
        int cnt = 0;
        int l = 0, r = s1.size();

       
        while(l<s2.size())
        {
            string s = s2.substr(l,r);
            
            sort(s.begin(), s.end());
          

            if(s == s1) return true;
            l++;
        }

        return false;
    }
};
