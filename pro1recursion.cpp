#include<bits/stdc++.h>
using namespace std;

int printrev(int i, int n, int a[])
{
    if(i<=n)
    {
        printrev(i+1,n,a);
        printf("%d",a[i]);
    }

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    printrev(1,n,a);
    return 0;
}
