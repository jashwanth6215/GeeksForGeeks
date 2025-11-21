class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n=arr.size()/2;
        map<int,int>m;
        for(auto &i:arr)
        {
            m[i]++;
        }
        for(auto &i:m)
        {
            if(i.second>n)
            {
                return i.first;
            }
        }
        return -1;
    }
};