class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>res;

        for(int i = 0; i<asteroids.size(); i++)
        {
            if(st.empty())
            {
            st.push(asteroids[i]);
            continue;
            }
           
                while(st.size() >0 && st.top()>0 && asteroids[i]<0)
                {
                    int diff = asteroids[i] + st.top();
                    if(diff<0)
                    {
                        st.pop();
                    }
                    else if(diff>0)
                    {
                        asteroids[i] = 0;
                    }
                    else
                    {
                        asteroids[i] = 0;
                        st.pop();
                    }
                   
                }
                if(asteroids[i]!=0)
                st.push(asteroids[i]);
           
           
           
        }
        while(!st.empty()){
        res.push_back(st.top());
        st.pop();
        }
        reverse(res.begin(), res.end());

        return res;
    }
};