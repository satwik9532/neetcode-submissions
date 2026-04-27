class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n = s.size()/2;
        for(int i = 0,j = s.size()-1; i<n,j>=n;i++,j--)
        {
            swap(s[i],s[j]);
        }
    }
};