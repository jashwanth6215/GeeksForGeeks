class Solution {
  public:
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        vector<int>v;
        for(auto &i:queries)
        {
            int l=i[0],h=i[1],x=i[2];
            int ans=-1;
            while(l<=h)
            {
                int m=(l+h)/2;
                if(arr[m]==x)
                {
                    ans=m;
                    h=m-1;
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
            if(ans==-1)
            {
                v.push_back(0);
                continue;
            }
            l=i[0],h=i[1];
            int ans1=-1;
            while(l<=h)
            {
                int m1=(l+h)/2;
                if(arr[m1]==x)
                {
                    ans1=m1;
                    l=m1+1;
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
            v.push_back(ans1-ans+1);
        }
        return v;
    }
};