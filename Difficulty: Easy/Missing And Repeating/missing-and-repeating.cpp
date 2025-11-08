class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        unordered_map<int,int>m;
        for(auto &i:arr)
        {
            m[i]++;
        }
        vector<int>v;
        for(auto &i:m)
        {
            if(i.second==2)
            {
                v.push_back(i.first);
            }
        }
        for(int i=1;i<=arr.size();i++)
        {
            if(m.find(i)==m.end())
            {
                v.push_back(i);
            }
        }
        return v;
    }
};