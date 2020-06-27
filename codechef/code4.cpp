#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
		ll n;
		cin>>n;
		vector<ll>g(n);
		vector<ll>a(n);
		vector<ll>b(n);
		for(ll i=0;i<n;i++)
		{
			ll e1,e2,e3;
			cin>>e1>>e2>>e3;
			g[i]=e1;
			a[i]=e2;
			b[i]=e3;
		}
		double chef=0;
		double chefu=0;
		for(ll i=0;i<n;i++)
		{
			double total=a[i]+b[i];
			chefu+=(a[i]/total)*g[i];
			chef+=(b[i]/total)*g[i];
		}
		cout<<fixed<<setprecision(5)<<chef<<" "<<chefu<<endl;
	}
}
