// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        // Your code goes here
        unordered_set<char>st;
        string ans="";
        for(auto &i:s)
        {
            if(st.find(i)!=st.end())
            {
                continue;
            }
            st.insert(i);
            ans+=i;
        }
        return ans;
    }
};