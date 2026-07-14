class Solution {
public:
    vector<vector<string>> res;
    bool isPalindrome(string &s, int left, int right)
{
    while (left < right)
    {
        if (s[left] != s[right])
            return false;

        left++;
        right--;
    }

    return true;
}

    void backtrack(string s, vector<string>& sub, int end)
    {   if(end == s.size())
    {
        res.push_back(sub);
        return;
    }
    for(int start = end; end<s.size(); end++)
    {
      
        if(isPalindrome(s,start,end))
        {
            sub.push_back(s.substr(start, end - start + 1));
            backtrack(s,sub,end+1);
            sub.pop_back();
        }
    }
   
    

    }
    vector<vector<string>> partition(string s) {
        vector<string> sub;
        backtrack(s,sub,0);
        return res;
    }
};
