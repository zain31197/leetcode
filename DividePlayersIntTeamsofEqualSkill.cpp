//SORTING
// PAIRING SMALLEST WITH LARGEST AND SO ON ... 
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
     int n=skill.size();
     sort(begin(skill),end(skill));
     int i=0;
     int j=n-1;
     int s=skill[i]+skill[j];
     long long chem=0;
        while(i<j)
        {
            int currskill=skill[i]+skill[j];
            if(currskill!=s)
            {
                return -1;
            }
            chem+=(long long )(skill[i])*(long long)(skill[j]);
            i++;
            j--;
        }
        return chem;
    }
};