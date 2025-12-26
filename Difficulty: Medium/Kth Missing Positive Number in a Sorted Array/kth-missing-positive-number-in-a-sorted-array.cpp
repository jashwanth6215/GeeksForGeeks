class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        unordered_set<int>s;
        for(auto &i:arr)
        {
            s.insert(i);
        }
        int c=0;
        for(int i=1;i<=pow(10,6);i++)
        {
            if(s.find(i)==s.end())
            {
                c++;
            }
            if(c==k)
            {
                return i;
            }
        }
        return pow(10,6)+k;
    }
};