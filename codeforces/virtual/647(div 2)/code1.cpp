#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll getR(ll a)
{
	while(a%2==0)
		a/=2;
	return a;
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		if(a>b)
			swap(a,b);
		ll r=getR(a);
		if(getR(b)!=r)
		{
			cout<<-1<<"\n";
			continue;
		}
		int ans=0;
		b/=a;
		while(b>=8)
			b/=8,ans++;
		if(b>1)
			ans++;
		cout<<ans<<"\n";	
	}
	
}
