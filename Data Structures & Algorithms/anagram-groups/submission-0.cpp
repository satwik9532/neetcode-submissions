class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       int n = strs.size();
    vector<vector<string>> ans;
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        unordered_map<char,int> mpr;
        for (char c : strs[i]) mpr[c]++;

        vector<string> temp = {strs[i]};
        visited[i] = true;

        for (int k = i + 1; k < n; k++) {
            if (visited[k]) continue;
            if (strs[k].size() != strs[i].size()) continue;

            unordered_map<char,int> mpl;
            for (char c : strs[k]) mpl[c]++;

            if (mpl == mpr) {
                temp.push_back(strs[k]);
                visited[k] = true;
            }
        }

        ans.push_back(temp);
    }
    return ans;
    }
};
