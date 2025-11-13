class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int l=0,h=arr.size()-1;
        int ans=-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(arr[m]==k)
            {
                ans=m;
                h=m-1;
            }
            else if(arr[m]>k)
            {
                h=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return ans;
    }
};