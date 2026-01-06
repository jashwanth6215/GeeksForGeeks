class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int sum=0;
        int Max=-1;
        for(int i=0;i<k;i++)
        {
            sum^=arr[i];
        }
        Max=max(sum,Max);
        for(int i=k;i<arr.size();i++)
        {
            sum^=arr[i-k];
            sum^=arr[i];
            Max=max(sum,Max);
        }
        Max=max(sum,Max);
        return Max;
    }
};