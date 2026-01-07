class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int>m;
        vector<int>v;
        int c=0;
        for(int i=0;i<k;i++)
        {
            if(m.find(arr[i])==m.end())
            {
                c++;
            }
            m[arr[i]]++;
        }
        v.push_back(c);
        for(int i=k;i<arr.size();i++)
        {
            m[arr[i-k]]--;
            if(m[arr[i-k]]==0)
            {
                c--;
            }
            
            if(m.find(arr[i])==m.end() || m[arr[i]]==0)
            {
                c++;
            }
            m[arr[i]]++;
            v.push_back(c);
        }
        return v;
    }
};