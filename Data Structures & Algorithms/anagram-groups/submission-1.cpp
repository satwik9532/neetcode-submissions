class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string,vector<string>> group_map;

      for(int i = 0; i< strs.size(); i++)
      {
        vector<int> count(26,0);
        for(char c: strs[i]) count[c-'a']++;

        string key = "";
        for(int j = 0; j<26; j++){
            key+= '#' + to_string(count[j]);
        }
        group_map[key].push_back(strs[i]);

      }
      vector<vector<string>> result;
      for(auto& i: group_map) 
      result.push_back(i.second);

      return result;
    }
};
