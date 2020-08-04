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
		ll x,y,n;
		cin>>x>>y>>n;
		ll k=n;
		ll result=k;
		while(k)
		{
			if(k % x==y)
			{
				result=k;
				break;
			}
			k--;
		}
		cout<<k<<endl;
		
	}
}
