

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        stack<int>s;
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(s.empty() || s.top()<=arr[i])
            {
                s.push(arr[i]);
            }
        }
        vector<int>v;
        while(!s.empty())
        {
            v.push_back(s.top());
            s.pop();
        }
       
        return v;
    }
};