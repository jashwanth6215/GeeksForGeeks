class Solution {
  public:
    bool isPowerofTwo(int n) {
        // code here
        // while(n%2==0)
        // {
        //     n/=2;
        // }
        // return n==1;
        if(n<=0)
        {
            return false;
        }
        return (n & (n-1))==0;
    }
};