class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       int n = arr.size();

    // Step 1: find the insertion position of x
    int right = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
    int left = right - 1;

    vector<int> result;

    // Step 2: pick k closest elements
    while (k--) {
        if (left < 0) {
            result.push_back(arr[right++]);
        }
        else if (right >= n) {
            result.push_back(arr[left--]);
        }
        else {
            int leftDiff = abs(arr[left] - x);
            int rightDiff = abs(arr[right] - x);

            if (leftDiff <= rightDiff) {
                result.push_back(arr[left--]);
            } else {
                result.push_back(arr[right++]);
            }
        }
    }

    // Step 3: sort result
    sort(result.begin(), result.end());
    return result;
        
    }
};