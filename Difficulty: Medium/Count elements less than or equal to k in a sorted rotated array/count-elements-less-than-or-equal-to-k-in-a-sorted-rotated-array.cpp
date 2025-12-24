class Solution {
    public:
    int countLessEqual(vector<int>& arr, int x) {
        // code here
        int c=0;
        for(auto &i:arr)
        {
            if(i<=x)
            {
                c++;
            }
        }
        return c;
    }
};