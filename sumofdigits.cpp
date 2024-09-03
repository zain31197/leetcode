// Complexity
// Time complexity:
// O(N)

// Space complexity:
// O(1)
class Solution {
public:
   int getLucky(string s, int k) {
        long long sum = 0;

        // Convert the string into digits
        for (int i = 0; i < s.length(); i++) {
            int value = (s[i] - 'a') + 1;
            if (value > 9) {
                int tens = value / 10;
                int units = value % 10;
                sum += tens + units;
            } else {
                sum += value;
            }
        }

        // Apply the transformation k times
        while (k > 1) {
            long long newSum = 0;
            while (sum > 0) {
                newSum += sum % 10;
                sum /= 10;
            }
            sum = newSum;
            k--;
        }

        return sum;
    }
};