class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int l=0,h=arr.size()-1;
        int ans=-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(arr[m]==x)
            {
                ans=m;
                l=m+1;
            }
            else if(arr[m]<x)
            {
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
        l=0,h=arr.size()-1;
        int ans1=-1;
        while(l<=h)
        {
            int m1=(l+h)/2;
            if(arr[m1]==x)
            {
                ans1=m1;
                h=m1-1;
            }
            else if(arr[m1]<x)
            {
                l=m1+1;
            }
            else
            {
                h=m1-1;
            }
        }
        return {ans1,ans};
    }
};