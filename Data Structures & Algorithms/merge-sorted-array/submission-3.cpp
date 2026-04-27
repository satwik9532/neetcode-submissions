class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       // int k = nums1.size();
        vector<int> temp(nums1.begin(), nums1.end());
        int i = 0, j = 0,k=0;
        while(i<m && j<n)
        {
           if(temp[i]<nums2[j] || temp[i]==nums2[j])
           {
            nums1[k] = temp[i];
            i++,k++;
           }
           if((nums2[j]<temp[i]) && j<n)
           {
            nums1[k] = nums2[j];
            j++, k++;
           }
        }

        while(i<m)
        {
            nums1[k++] = temp[i++];
        }
        while(j<n)
        {
            nums1[k++] = nums2[j++];
        }

      
        
    }
};