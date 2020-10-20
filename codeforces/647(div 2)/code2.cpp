#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll>a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		vector<int> occ(1024, 0);
		for(int i = 0; i < n; i++) 
			for(int j = 0; j < n; j++) 
				occ[a[i]^a[j]]++;
		int ans = 1;
		while(ans < 1024 && occ[ans] < n) ans++;
		cout << ((ans == 1024) ? -1 : ans) << "\n";
	}
}
