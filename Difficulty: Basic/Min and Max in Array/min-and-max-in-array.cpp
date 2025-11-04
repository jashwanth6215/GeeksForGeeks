class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int Min=INT_MAX,Max=0;
        for(auto &i:arr)
        {
            Max=max(i,Max);
            Min=min(i,Min);
        }
        return {Min,Max};
    }
};