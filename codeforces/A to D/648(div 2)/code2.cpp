#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int count0=0;
		int count1=0;
		cin>>n;
		vector<ll>a(n);
		vector<ll>b(n);
		for(ll i=0;i<n;i++)
			cin>>a[i];
		for(ll i=0;i<n;i++)
		{
			cin>>b[i];
			if(b[i]==0)
				count0++;
			else
				count1++;
		}		
		int flag=0;
		for(ll i=1;i<n;i++)
		{
			if(a[i]<a[i-1])			
			{
				flag=1;
				break;
			}
		}	
		if(flag==0)
		{
			cout<<"Yes"<<"\n";
			continue;
		}
		if(count1==0 || count0==0)
		{
			cout<<"No"<<"\n";
			continue;
		}	
		else
			cout<<"Yes"<<"\n";
	}
}
