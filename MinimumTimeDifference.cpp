class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n=timePoints.size();
        vector <int> miniutes(n); // minutes array to store minutes
        for(int i=0;i<n;i++)
        {
            string time=timePoints[i];
            string houri=time.substr(0,2); // hour
            string mini=time.substr(3); // miniutes
            int hour=stoi(houri);
            int min=stoi(mini);
            miniutes[i]=hour*60+min; // converting time in minutes
        }
        sort(begin(miniutes),end(miniutes)); // sorting so we can easily get difference
     
    int result=INT_MAX;
    
    for(int i=1;i<n;i++)
    {
    result=min(result,miniutes[i]-miniutes[i-1]); // difference of time converted in  miniutes 
    }
    return min(result,(24*60-miniutes[n-1])+miniutes[0]); // for handling edge cases like 23:59 converting 24 hours in minutes and subtrating from last like 23:59 which gives 1 difference
    }
};