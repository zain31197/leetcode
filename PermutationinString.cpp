// to check permutation of complete string s1 is present in s2 sort both and check both are equal or not 
// e.g s1="bcd"  s2="dcb"  to check permutation of s1 in s2 sort both and return s1==s2 

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if(n>m)
        {
            return false;
        }
        sort(begin(s1),end(s1));
        for(int i=0;i<=m-n;i++)
        {
            string substring=s2.substr(i,n);
            sort(begin(substring),end(substring));
            if(s1==substring)
            {
                return true;
            }
        }
        return false;
    }
};