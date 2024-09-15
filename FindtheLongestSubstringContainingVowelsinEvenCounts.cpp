//Time Complexity O(N) one time traversing second loop is runnig five times O(1) complexity for it
// Space Complexity O(1)

class Solution {
public:
    int findTheLongestSubstring(string s) {
    // Initialize an array to track the count of each vowel
     int arr[5]={0};
     int maxlength=0;
     unordered_map<string,int> vowels;  
     string currentstate="00000";// Initial state where all vowels have even counts
     vowels[currentstate]=-1;
     for(int i=0;i<s.length();i++)
     {
           // Update count for the vowel encountered  mod becuse to check even or odd ocuurence
     if(s[i]=='a')
     {
        arr[0]=(arr[0]+1)%2;
     }
      if(s[i]=='e')
     {
        arr[1]=(arr[1]+1)%2;
     }
      if(s[i]=='i')
     {
        arr[2]=(arr[2]+1)%2;
     }
      if(s[i]=='o')
     {
        arr[3]=(arr[3]+1)%2;
     }
      if(s[i]=='u')
     {
        arr[4]=(arr[4]+1)%2;
     }
      // Create a string representing the current parity state of vowels
     currentstate="";
        // Check if we've seen this state before
     for(int j=0;j<5;j++)
     {
          // Calculate the length of the substring
        currentstate+=to_string(arr[j]);
     }
     if(vowels.find(currentstate)!=vowels.end())
     {
        maxlength=max(maxlength,(i-vowels[currentstate]));
     }
     else{
    // Store the first occurrence of this state
     vowels[currentstate]=i;
     }
     }
     return maxlength;
    }
};