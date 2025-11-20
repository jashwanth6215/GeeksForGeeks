class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        map<int,int>m;
        for(auto &i:a)
        {
            m[i]++;
        }
        for(auto &i:b)
        {
            m[i]--;
        }
        for(auto &i:m)
        {
            if(i.second!=0)
            {
                return false;
            }
        }
        return true;
    }
};