class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        pair<int,int>temp={arr[0][0],arr[0][1]};
        for(int i=1;i<arr.size();i++)
        {
            if(temp.second>=arr[i][0])
            {
                if(temp.second<arr[i][1])
                {
                    temp.second=arr[i][1];
                }
            }
            else
            {
                ans.push_back({temp.first,temp.second});
                temp.first=arr[i][0];
                temp.second=arr[i][1];
            }
        }
        ans.push_back({temp.first,temp.second});
        return ans;
    }
};