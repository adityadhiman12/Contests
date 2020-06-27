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
		ll n,k;
		cin>>n>>k;
		vector<ll>a(n);
		ll sum=0;
		ll maxE=INT_MIN;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			if(a[i]>maxE)
				maxE=a[i];
		}
		ll num=1;
		ll minDiff=INT_MAX;
		ll realNum=num;
		for(int i=1;i<=32;i++)
		{
			if(maxE-num<minDiff && num<maxE)
			{
				realNum=num;
				num=num<<1;	
			}
			else 
				break;
		}
		cout<<realNum<<endl;
	}
}
