#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int a,b,c,d,i,j,k,l;

    cin>>a;
    int fenwik[a+1];
    memset(fenwik,0,sizeof(fenwik));
    int a1[a+1];

    for(i=1;i<=a;i++)
        {cin>>a1[i];
        //this is actually build tree function

            j=i;
            while(j<=a)
            {
                fenwik[j]+=a1[i];
                j+=(j&-j);
            }
        }
         for(j=1;j<=a;j++)
            cout<<fenwik[j]<<" ";
            cout<<endl;
        // update function be like
        cout<<"Entre the the idex that you want to update and the corresponding number"<<endl;
        cin>>b>>c;
        //this means you ae updating the value c at index b;
        j=b;
        while(j<=a)
        {

            fenwik[j]+=c-a1[b];
            j+=(j&-j);

        }
        a1[b]=c;
        //after updation now go to range sum quary

        cout<<"Entre the indexes for range sum quary"<<endl;
        cin>>k>>l;
        //firstly we find sum for range 1 to k;
        int sum1=0;
        j=k;
        while(j>0)
        {
            sum1+=fenwik[j];
            j-=(j&-j);
        }
        // now we will calculate the sum for range 1 to l;

        int sum2=0;
        j=l;
        while(j>0)
        {
            sum2+=fenwik[j];
            j-=(j&-j);
        }

        // the range sum k to L=(range sum 1 to L)-(range sum 1 to k)
        cout<<sum2-sum1<<endl;





}
