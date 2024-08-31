// Intuition
// First Solve two Sum then you understand this

// Approach
// n1+n2=-n3

// Complexity
// Time complexity:
// O(n2)

// Space complexity:
// O(1)
class Solution {
public:
void twosum(vector <int>&nums,int i,vector<vector<int>>&result,int target)
{
int j=nums.size()-1;
while(i<j)
{
    if(nums[i]+nums[j]>target)
    {
        j--;
    }
    else if(nums[i]+nums[j]<target)
    {
        i++;
    }
    else 
    {
        result.push_back({-target,nums[i],nums[j]});
        while(i<j&&nums[i]==nums[i+1])
        i++;
         while(i<j&&nums[j]==nums[j-1])
        j--;
        i++;
        j--;
    }
}
}

    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3)
        {
            return {};
        }
    vector <vector<int>> result;
    //1st sort array when elements needed in question if index required donot sort
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-2;i++)
    {
        if(i!=0&&nums[i]==nums[i-1])
        {
            continue;
        }
        twosum(nums,i+1,result,-nums[i]);
    }
    return result;
    }
};