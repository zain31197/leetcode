// Intuition
// Just took a page and pen try to visualize the array by drawing both 1D and 2D array

// Approach
// Just run a nestted for loop and fill the 2d array

// Complexity
// Time complexity:
// O(N*M)

// Space complexity:
// O(N*M)
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        // Check if the size of the original array matches m * n
        if (original.size() != m * n) {
            return {};
        }

        // Create the 2D vector
        vector<vector<int>> arr(m, vector<int>(n));

        int k = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = original[k++];
            }
        }

        return arr;
    }
};
