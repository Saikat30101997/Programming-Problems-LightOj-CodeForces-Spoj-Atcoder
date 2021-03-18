 #include<bits/stdc++.h>
 using namespace std;

 void print(int i,int j,int a[])
 {
     if(i>j)
        return;
     else
     {
         printf("%d %d\n",a[i],a[j]);
         print(i+1,j-1,a);
     }
 }

 int main()
 {
     int n;
     cin>>n;
     int a[n];
     for(int i=1;i<=n;i++)
        cin>>a[i];
     print(1,n,a);
     return 0;
 }
