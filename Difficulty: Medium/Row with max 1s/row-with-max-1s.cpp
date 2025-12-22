// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int Max=-1;
        int check=0;
        for(int i=0;i<arr.size();i++)
        {
            int c=0;
            for(auto &j:arr[i])
            {
                if(j==1)
                {
                    c++;
                }
            }
            if(c>check)
            {
                check=c;
                Max=i;
            }
        }
        return Max;
    }
};