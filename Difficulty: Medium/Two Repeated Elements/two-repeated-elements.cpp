class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {
        // code here
        set<int>s;
        vector<int>v;
        for(auto &i:arr)
        {
            if(s.find(i)!=s.end())
            {
                v.push_back(i);
            }
            s.insert(i);
        }
        return v;
    }
};
