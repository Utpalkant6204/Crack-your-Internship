//set matrix zero

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
      int n = matrix.size();
      int m = matrix[0].size();
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(matrix [i][j]==0)
          {
            int p=0,q=0;
            
            while(p<n)
            {
              if(matrix[p][j]!=0)
              {
                matrix[p][j] = INT_MIN+1;
              }
              p++;
            }
            while(q<m)
            {
              if(matrix[i][q]!=0)
              {
                matrix[i][q] = INT_MIN+1;
              }
              q++;
            }
          } 
        }
      }
      
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(matrix[i][j]==INT_MIN+1)
          {
            matrix[i][j]=0;
          }
        }
      }
    }
};
