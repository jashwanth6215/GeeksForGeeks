class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        map<int,int>m;
        int Max=0;
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
        return v;
    }
};