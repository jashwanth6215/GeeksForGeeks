// Return true if s is binary, else false
class Solution {
  public:
    bool isBinary(string& s) {
        // Your code here
        for(auto &i:s)
        {
            if(i!='1' && i!='0')
            {
                return false;
            }
        }
        return true;
    }
};