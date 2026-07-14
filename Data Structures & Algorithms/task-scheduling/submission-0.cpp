class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
     vector<int> mp(26,0);
      for(char i: tasks)
      mp[i-'A']+=1;

      int maxcount = 0, maxfreq = *max_element(mp.begin(), mp.end());

      for(int f: mp)
      {
        if(f == maxfreq) maxcount++;
      }

      return max((int)tasks.size(), (n+1)*(maxfreq-1) + maxcount);
      
      

      
       
    }
};
