#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,t;
    long long p,l,n,m,s;
    vector<long long>a;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       cin>>p>>l;
       m = p-l;
       cout<<"Case "<<i<<":";
       if(m<=l || m==0){
         cout<<" impossible"<<endl;

         }

       s = sqrt(m);
       for(j=1;j<=s;j++)
       {
           if(m%j==0)
           {
               a.push_back(j);
               a.push_back(m/j);
           }

       }
       sort(a.begin(),a.end());
       a.resize(distance(a.begin(),unique(a.begin(),a.end())));

       for(j=0;j<a.size();j++)
       {
           if(a[j]>l)
           {
               cout<<" "<<a[j];
           }

       }
       //cout<<a.size();
       cout<<endl;
       a.clear();
    }
    return 0;
}


