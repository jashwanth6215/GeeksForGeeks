class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        map<int,int>m;
        for(auto &i:a)
        {
            m[i]++;
        }
        for(auto &i:b)
        {
            m[i]--;
        }
        for(auto &i:b)
        {
            if(m[i]<0)
            {
                return false;
            }
        }
        return true;
    }
};