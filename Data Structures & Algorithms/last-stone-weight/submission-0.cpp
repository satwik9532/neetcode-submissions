class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size() > 1)
        {
            sort(stones.begin(), stones.end());
            int curr  = abs(stones.back() - stones[stones.size()-2]);
            stones.pop_back();
            stones.pop_back();
            if(curr!=0) stones.push_back(curr);
        }

        if(stones.size() == 0) return 0;

        return stones[0];
    }
};
