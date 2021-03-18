#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=1;
    long long a[4];
    cin>>n;
    while(n--)
    {
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a,a+3);
        if((a[0]*a[0]+(a[1]*a[1])==(a[2]*a[2]))){
            cout<<"case "<<p++<<": "<<"yes"<<endl;
        }
        else{

             cout<<"case "<<p++<<": "<<"no"<<endl;

        }

    }
    return 0;

}
