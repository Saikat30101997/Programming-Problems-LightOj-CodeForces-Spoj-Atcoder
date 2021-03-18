#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll A,B,N;
    ll sum=0;
    pair<ll,ll> somepair;
    cin>>N;
    vector<pair<ll,ll> > vect;
    for(ll i=0; i<N; i++)
    {
        cin>>A>>B;
        vect.push_back(make_pair(B,A));
    }
    sort(vect.begin(),vect.end());

    for(ll i=0; i<N; i++)
        cout<<vect[i].first<<' '<<vect[i].second<<endl;;
    for(ll i=0; i<N; i++)
    {
        sum+=vect[i].second;
        if(sum>vect[i].first)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}

