class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        for(string& i: operations)
        {
            if(i == "+")
            {
                int top = s.top();
                s.pop();
                int t = top + s.top();
                s.push(top);
                s.push(t);
            }
            else if(i == "D")
            {
                s.push(2*s.top());
            }
            else if(i == "C")
            {
                s.pop();
            }
            else s.push(stoi(i));
        }
       int res = 0;
        while (!s.empty()) {
        res += s.top();
        s.pop();
}

        return res;
    }
};