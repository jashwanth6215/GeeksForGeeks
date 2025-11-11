class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        map<char,char>m={{'[',']'},{'{','}'},{'(',')'}};
        stack<char>st;
        for(auto &i:s)
        {
            if(i=='(' || i=='[' || i=='{')
            {
                st.push(i);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                else
                {
                    if(i==m[st.top()])
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        if(st.size()!=0)
        {
            return false;
        }
        return true;
    }
};