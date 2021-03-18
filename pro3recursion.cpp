#include<bits/stdc++.h>
using namespace std;

int oddnumber(int i,int n,int a[])
{
     if(i<n){
        if(a[i]%2==0)
        {

            printf("%d ",a[i]);
        }
        oddnumber(i+1,n,a);

        }
}

int main()
{
    int n,i;
    cin>>n;

    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    oddnumber(0,n-1,a);



}
