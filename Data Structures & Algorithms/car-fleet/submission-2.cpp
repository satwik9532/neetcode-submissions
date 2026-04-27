class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        unordered_map<int,int> idx;
        stack<double> time;
        int n = speed.size();

        for(int i = 0; i<n; i++)
        {
            idx[position[i]] = i;
        }
        sort(position.begin(), position.end(), greater<int>());
        for(int i = 0; i<n; i++)
        {
            int remainingDist = target - position[i];
            double timeRemain = (double)remainingDist/(double)speed[idx[position[i]]];

            if(time.size() < 1) 
            {
                time.push(timeRemain);
                continue;
            }
            else if(timeRemain > time.top())
            {
                time.push(timeRemain);
            }
            else if(timeRemain = time.top())
            {
               // time.pop();
            }
        }
        return time.size();
    }
};
