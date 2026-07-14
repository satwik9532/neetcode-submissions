class Solution {
public:
  unordered_map<char, string> mp = {

    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"} };
vector<string> res;
void backtrack(string digits, int ind, string current)
{
    if(ind == digits.size())
    {
        res.push_back(current);
        return;
    }
    for(char c: mp[digits[ind]])
    {
        current.push_back(c);
         backtrack(digits, ind+1, current);
         current.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return res;
        string current = "";
      backtrack(digits, 0, current);
      return res;

    }
};
