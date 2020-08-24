#include<bits/stdc++.h>
using namespace std;
vector<int>get_z(string s)
{
    vector<int>v;
    int l,r,i,j,k;
    for(i=0;i<s.length();i++)
        v.push_back(0);

    l=r=0;
    for(i=1;i<s.length();i++)
    {
        if(i>r)
        {
            l=r=i;
            while(r<s.length() && s[r-l]==s[r])
                r++;
            v[i]=r-l;
            r--;
        }
        else
        {
            if(v[i-l]<r-i+1)
            {
                v[i]=v[i-l];
            }
            else
            {
                l=i;
                while(r<s.length()&& s[r-l]==s[r])
                    r++;
                v[i]=r-l;
                r--;
            }
        }
    }
return v;
}
int main()
{

    long long int a,b,c,d,i,j,k,l;
    string s1,s2,s3;
    cin>>s1>>s2;
    vector<int>v;
    s1=s1+"$"+s2;
   v= get_z(s1);
   for(int i=0;i<v.size();i++)
    cout<<v[i];
}
