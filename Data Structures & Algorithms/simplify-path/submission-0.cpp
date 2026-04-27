class Solution {
public:
    string simplifyPath(string path) {
         int n = path.size();
    stack<string> st;

    for (int i = 0; i < n; i++) {

        // 1) Skip multiple slashes
        if (path[i] == '/') continue;

        // 2) Extract one directory name (token) until next '/'
        string token = "";
        while (i < n && path[i] != '/') {
            token += path[i];
            i++;
        }

        // Now i is at '/' or end, loop will i++ again so we do i-- for balance
        i--;

        // 3) Process token
        if (token == ".") {
            continue; // stay in same directory
        }
        else if (token == "..") {
            if (!st.empty()) st.pop(); // go back
        }
        else {
            st.push(token); // normal folder
        }
    }

    // 4) Build final answer
    if (st.empty()) return "/";

    string ans = "";
    while (!st.empty()) {
        ans = "/" + st.top() + ans;
        st.pop();
    }

    return ans;
    }
};