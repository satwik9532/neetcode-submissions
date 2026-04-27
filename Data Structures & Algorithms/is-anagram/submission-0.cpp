class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq1;
        unordered_map<char, int> freq2;

        if(s.length()!= t.length()) return false;

        for(int i = 0; i<s.length(); i++)
        {
            freq1[s[i]]++;
        }
        for(int i = 0; i<t.length(); i++)
        {
            freq2[t[i]]++;
        }
        for(int i = 0;i<t.length(); i++)
        {
            if(freq1[s[i]]!= freq2[s[i]])
            { 
             
                return false;

            }
        }

        return true;

    }
};
