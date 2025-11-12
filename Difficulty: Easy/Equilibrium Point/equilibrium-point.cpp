class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        vector<int>temp(arr.size());
        temp[0]=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            temp[i]=temp[i-1]+arr[i];
        }
        int total=temp[arr.size()-1];
        for(int i=0;i<arr.size();i++)
        {
            if(temp[i]-arr[i]==total-temp[i])
            {
                return i;
            }
        }
        return -1;
    }
};