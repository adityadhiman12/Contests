#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll n;
	cin>>n;
	vector<ll>a(n+1);
	vector<ll>b(n+1);
	vector<ll>pos(n+1);
	map<ll,ll>m;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
		pos[a[i]]=i;
	}
	for(ll i=1;i<=n;i++)
		cin>>b[i];
	for(ll i=1;i<=n;i++)
	{
		ll cur=pos[b[i]]-i;
		if(cur<0)
			cur+=n;
		m[cur]++;
	}
	ll ans=0;
	for(auto i: m)
		ans=max(ans,i.second);
	cout<<ans<<"\n";	
	
}
