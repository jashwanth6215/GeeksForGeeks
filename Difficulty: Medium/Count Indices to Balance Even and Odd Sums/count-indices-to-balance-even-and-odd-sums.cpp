class Solution {
  public:
    int cntWays(vector<int>& arr) {
        // code here
        int n=arr.size();
        int te=0,to=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                te+=arr[i];
            }
            else{
                to+=arr[i];
            }
        }
        int c=0;
        int e=0,o=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(te-arr[i]-e+o==to-o+e)
                {
                    c++;
                }
                e+=arr[i];
            }
            else
            {
                if(to-o-arr[i]+e==te-e+o)
                {
                    c++;
                }
                o+=arr[i];
            }
        }
        return c;
    }
};