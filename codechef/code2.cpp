#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
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
		vector<ll>a(n);
		ll final[200001]={0};
		ll maxE=INT_MIN;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			maxE=max(a[i],maxE);
		}
		ll flag=0;
		for(ll i=0;i<n;i++)
		{
			final[a[i]]++;
			if(final[a[i]]==3)
			{
				flag=1;
				break;
			}
		}
		ll flag2=0;
		if(final[maxE]>=2)
			flag=1;
		if(flag==1 || flag2==1)
		{
			cout<<"NO"<<endl;
			continue;
		}
		else 
			cout<<"YES"<<endl;
		for(ll i=0;i<200001;i++)
			if(final[i]>0)
			{
				cout<<i<<" ";
				final[i]--;
			}
		for(ll i=200000;i>=0;i--)
			if(final[i]>0)
				cout<<i<<" ";
		cout<<endl;
 
	}
}
