class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        int n=arr.size();
        set<int>s;
        for(auto &i:arr)
        {
            s.insert(i);
        }
        for(int i=1;i<=n;i++)
        {
            if(s.find(i)==s.end())
            {
                return i;
            }
        }
        return n+1;
    }
};