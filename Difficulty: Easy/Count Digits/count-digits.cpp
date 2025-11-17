class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int temp=n;
        int count=0,c=0;
        while(n!=0)
        {
            c=n%10;
            if(c!=0 && temp%c==0)
            {
                count++;
            }
            n/=10;
        }
        return count;
    }
};