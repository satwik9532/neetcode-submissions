class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size()-1;
        while(i<j)
        {
        while (i < j && !isalnum((unsigned char)s[i])) i++;

        // Skip non-alphanumeric from right
        while (i < j && !isalnum((unsigned char)s[j])) j--;
            if(tolower(s[i]) == tolower(s[j]))
            {
                i++,j--;
            }
            else return false;
        }

        return true;
    }
};
