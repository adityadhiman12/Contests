#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		vector<ll>a(n);
		int sum=0;
		int f=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==1)
			{
				sum+=a[i];
			}
			else
			{
				even++;
			}
		}
				
	}
}	
