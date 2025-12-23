class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        // code here
        
        // for(int i=1;i<arr.size();i++)
        // {
        //     arr[i]=arr[i-1]+arr[i];
        // }
        // int sum=0;
        // for(int i=0;i<arr.size();i++)
        // {
        //     for(int j=i;j<arr.size();j++)
        //     {
        //         if(i==0)
        //         {
        //             sum+=arr[j];
        //         }
        //         else
        //         {
        //             sum+=arr[j]-arr[i-1];
        //         }
        //     }
        // }
        int sum=0;
        int n=arr.size();
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i]*((n-i)*(i+1));
        }
        return sum;
    }
};