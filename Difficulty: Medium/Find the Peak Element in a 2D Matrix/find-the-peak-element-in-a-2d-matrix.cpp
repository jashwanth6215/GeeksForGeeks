class Solution {
  public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                bool left=j-1<0?true:mat[i][j]>=mat[i][j-1];
                bool right=j+1>m-1?true:mat[i][j]>=mat[i][j+1];
                bool top=i-1<0?true:mat[i][j]>=mat[i-1][j];
                bool bottom=i+1>n-1?true:mat[i][j]>=mat[i+1][j];
                if(left &&  right && top && bottom)
                {
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};
