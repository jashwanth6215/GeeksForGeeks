
class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {

        // Code Here
        int c=0;
        for(auto &i:arr)
        {
            if(i<=x)
            {
                c++;
            }
        }
        return c;
    }
};