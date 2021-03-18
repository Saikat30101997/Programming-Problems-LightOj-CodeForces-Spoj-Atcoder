/*******************­************\
 Name: MD ASHRAFUZZAMAN KHAN |
 School: COMILLA UNIVERSITY |
 CSE (5TH BATCH) |
 ********************­************/

#include <bits/stdc++.h>

#define ll long long int
#define inf 1<<30
#define Pi 2*acos(0,0)
#define pi acos(-1)
#define PI 3.1415926535897932384626433832795
#define mem(x,y) memset(x,y,sizeof(x))
#define pf printf
#define sf scanf
#define MAX 100001

template < class T > inline T gcd(T a,T b) {a=abs(a);b=abs(b); if(!b) return a; return __gcd(b,a%b);}
template < class T > inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/__gcd(a,b))*b;}
//template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T ncr(T n,T r){return n*(n-1)/r;}
using namespace std;

  ll n,t;
bool check(ll a)
{
     t=n;
     ll b=0;
    while(t)
    {
        if(t>=a)
           {
               t-=a;
               b+=a;
           }
        else
        {
            b+=t;
            t=0;

        }

       t= t-(t/10);
    }
    if(n%2==0)
    {
       if(b>=n/2)
          return true;
       else
         return false;
    }
    else
    {
        if(b>n/2)
          return true;
        else
          return false;
    }

}

int main(){

    ios_base::sync_with_stdio(0);


    cin>>n;

     ll l=1,h=n,mid;
  ll ans=-1;
     while(l<=h)
     {
         cout<<l<<' '<<h<<endl;
         mid=(l+h)/2;
       //  cout<<mid<<endl;
         ll ch= check(mid);
         if(ch)
         {
             cout<<mid<<endl;
             h=mid-1;
             ans= mid;
         }
         else
            l=mid+1;
     }
     cout<<ans;

   ///cin.get(); cin.get();
   return 0;
}
