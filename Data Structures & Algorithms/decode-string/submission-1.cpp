
class Solution {
public:
    string decodeString(string s) {
        
        stack<char> st;
        int i = 0;
        while(i<s.size())
        {
            if(s[i] == ']')
            {
                string c = "";
                while(st.size() > 0 && !isdigit(st.top()) && st.top()!= '[')
                {
                    c = st.top() + c;
                    st.pop();
                }
                st.pop();
                int m = 0;
                int base = 1;
                while(st.size() > 0 && isdigit(st.top()))
                {
                    m+= (st.top() - '0')*base;
                    base = base*10;
                    st.pop();
                }
                string multipl = "";
                while(m--) multipl+= c;
                for (char c : multipl) st.push(c);

            }
            else st.push(s[i]);
            i++;

        }
       string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};