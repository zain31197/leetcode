// Complexity
// Time complexity:
// O(N)

// Space complexity:
// O(1)
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxvalue=0;
        int result=0;
        int streak=0;
        for(int num:nums)
        {
            if(num>maxvalue)
            {
                maxvalue=num;
                result=0;
                streak=0;
            }
            if(maxvalue==num){
                streak++;

            }
            else{
                streak=0;
            }
            result=max(result,streak);
        }
        return result;
    }
};