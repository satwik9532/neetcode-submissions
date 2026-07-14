class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;
        for(int s: stones)
        {
            maxHeap.push(s);
        }

        while(maxHeap.size()>1)
        {
            int firstStone = maxHeap.top();
            maxHeap.pop();
            int secondStone = maxHeap.top();
            maxHeap.pop();
            int diff = abs(firstStone - secondStone);

            if(diff!=0) maxHeap.push(diff);
        }
        if(maxHeap.size() == 0) return 0;
        return maxHeap.top();
    }
};
