#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n<3)
        return 1;

    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int n,p;
    cin>>n;
    p = fibonacci(n);
    cout<<p;

}
