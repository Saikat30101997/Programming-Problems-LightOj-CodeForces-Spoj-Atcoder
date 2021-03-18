 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n,m,t=1,test,p,q;
     cin>>test;
     while(test--)
     {
         printf("Case %d: \n",t++);
         cin>>n>>m;
         deque<int>q;
         string s;
         while(m--)
         {
             cin>>s;
             if(s=="pushLeft")
             {
                 cin>>p;
                 if(q.size()!=n)
                 {
                     q.push_front(p);
                     cout<<"Pushed in left: "<<p<<endl;
                 }
                 else
                    cout<<"The queue is full"<<endl;
             }
             else if(s=="pushRight")
             {
                 cin>>p;
                 if(q.size()!=n)
                 {
                     q.push_back(p);
                     cout<<"Pushed in left: "<<p<<endl;
                 }
                 else{
                    cout<<"The queue is full"<<endl;
                 }
             }
             else if(s=="popLeft")
             {
                 if(q.empty())
                    cout<<"The queue is empty"<<endl;
                 else{
                        cout<<"Popped from left: "<<q.front()<<endl;
                  q.pop_front();

                 }
             }
             else if(s=="popRight")
             {
                 if(q.empty())
                 {
                     cout<<"The queue is empty"<<endl;
                 }
                 else{
                    cout<<"Popped from left: "<<q.back()<<endl;
                    q.pop_back();
                 }

             }
         }

     }
     return 0;
 }
