class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        int l=0,res=0;
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
            while(m.size()>k)
            {
                m[arr[l]]--;
                if(m[arr[l]]==0)
                {
                    m.erase(arr[l]);
                }
                l++;
            }
            res+=i-l+1;
        }
        return res;
    }
};