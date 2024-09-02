// Complexity
// Time complexity:
// O(N)

// Space complexity:
// O(1)
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
         int i = 0;
         long long int  size=chalk.size();
           long long accSum = accumulate(chalk.begin(), chalk.end(), 0LL);
        k %= accSum; 
    while (k >= chalk[i]) {
        k -= chalk[i];
        i++;
        if (i == size) {
            i = 0;  // Reset the index to start over if we reach the end
        }
    }

    // cout << i;  // Output the index of the student who will replace the chalk
    return i;
    }

    // int chalkReplacer(vector<int>& chalk, int k) {
    //   long long accSum = accumulate(chalk.begin(), chalk.end(), 0LL);
    //     k %= accSum; 

    //     for (int i = 0; i < chalk.size(); ++i) {
    //         if (chalk[i] > k) {
    //             return i;  
    //         }
    //         k -= chalk[i];
    //     }
    //     return -1;  
    // }
};