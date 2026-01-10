int substring(string& s,int k)
{
    vector<int>m(256,0);
    int ans=0,l=0,size=0;
    for(int i=0;i<s.size();i++)
    {
        if(m[s[i]]++==0)
        {
            size++;
        }
        while(size>k)
        {
            if(--m[s[l]]==0)
            {
                size--;
            }
            l++;
        }
        ans+=i-l+1;
    }
    return ans;
}
class Solution {
  public:
    int countSubstr(string& s, int k) {
        // code here
        return substring(s,k)-substring(s,k-1);
    }
};