int substring(vector<int>& arr,int k)
{
    int l=0,ans=0,o=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]%2==1)
        {
            o++;
        }
        while(o>k)
        {
            if(arr[l]%2==1)
            {
                o--;
            }
            l++;
        }
        ans+=i-l+1;
    }
    return ans;
}
class Solution {
  public:
    int countSubarrays(vector<int>& arr, int k) {
        // code here
        return substring(arr,k)-substring(arr,k-1);
    }
};