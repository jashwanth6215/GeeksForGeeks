class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=arr[i];
        }
        int Max=sum;
        int n=arr.size();
        for(int i=k;i<arr.size();i++)
        {
            Max=max(Max,sum);
            sum+=arr[i]-arr[i-k];
        }
        Max=max(Max,sum);
        return Max;
    }
};