// User function template for C++

class Solution {
  public:
    int isdivisible7(string num) {
        // complete the function here
        int r=0;
        for(auto &i:num)
        {
            r=(((r*10)+(i-'0'))%7);
        }
        return !r;
    }
};