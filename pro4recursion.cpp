#include<bits/stdc++.h>
using namespace std;

void polynomial(int i ,int n)
{
    if(i<n){
    if(i==0)
    printf("1");
    else
    {
        printf(" +x");
        if(i>1)printf("^%d",i);
    }
    polynomial(i+1,n);
    }

}

int main()
{
    int n;
    cin>>n;
    polynomial(0,n);

}
