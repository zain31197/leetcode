// Complexity
// Time complexity:
// O(M*N)

// Space complexity:
// O(M*N)
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int top=0;
        int down=m-1;
        int left=0;
        int right=n-1;
        int direction=0;
        vector <int> result;
        //direction 0 is -> left to right
        //direction 1 is top to down
        //direction 2 is <- right to left
        //direction 3 is Down to Top 
        while(top<=down&&left<=right)
        {
           if(direction==0)
           {
            for (int i=left;i<=right;i++)
            {
                result.push_back(matrix[top][i]);
            }
            top++;
           }
           if(direction==1)
           {
            for (int i=top;i<=down;i++)
            {
                result.push_back(matrix[i][right]);
            }
            right--;
           } 
           if (direction==2)
           {
            for(int i=right;i>=left;i--)
            {
             result.push_back(matrix[down][i]);
            }
            down--;
           }
           if(direction==3)
           {
            for(int i=down;i>=top;i--)
            {
                result.push_back(matrix[i][left]);
            }
            left++;
           }
            direction = (direction+1)%4;
        }
        return result;
    }
};