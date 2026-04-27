class StockSpanner {
public:
    vector<int> arr;
    StockSpanner() {
        
    }
    
    int next(int price) {
        arr.push_back(price);
        int ans = 0;
        stack<int>st(arr.begin(),arr.end());
        
        while(st.size()>0)
        {
            if(st.top()<=price) 
            {ans++;
            st.pop();
            }
            else break;
        }
        
        
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */