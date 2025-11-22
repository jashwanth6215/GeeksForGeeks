class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        // add code here.
        unordered_set<int>s;
        for(auto &i:b)
        {
            s.insert(i);
        }
        for(int i=0;i<a.size();i++)
        {
            if(s.find(a[i])==s.end())
            {
                return i;
            }
        }
    }
};