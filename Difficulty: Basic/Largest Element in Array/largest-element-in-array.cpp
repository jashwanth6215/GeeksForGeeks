class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int Max=-1;
        for(auto &i:arr)
        {
            Max=max(Max,i);
        }
        return Max;
    }
};
