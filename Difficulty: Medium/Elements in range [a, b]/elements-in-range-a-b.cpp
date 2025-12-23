class Solution {
  public:
    vector<int> cntInRange(vector<int> &arr, vector<vector<int>> &queries) {
        // code here
        vector<int>v;
        sort(arr.begin(),arr.end());
        for(auto &i:queries)
        {
            auto it=lower_bound(arr.begin(),arr.end(),i[0]);
            auto it1=lower_bound(arr.begin(),arr.end(),i[1]+1);
            v.push_back(it1-it);
        }
        return v;
    }
};