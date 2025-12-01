class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        // your code here
        int e=0,o=0;
        for(auto &i:arr)
        {
            if(i%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        return {o,e};
    }
};