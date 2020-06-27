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
		ll N,target;
		cin>>N>>target;
		vector<ll>a(N);
		for(ll i=0;i<N;i++)
			cin>>a[i];
		vector<vector<ll>>A(N,vector<ll>(N));
		for(ll i=0;i<N;i++)
			for(ll j=0;j<N;j++)
				A[i][j]=a[i]+a[j];
		ll res=0;
		ll m=A.size();
		ll n=A[0].size();
		for (ll i = 0; i < m; i++)
            for (ll j = 1; j < n; j++)
                A[i][j] += A[i][j - 1];

        unordered_map<ll, ll> counter;
        for (ll i = 0; i < n; i++) 
        {
            for (ll j = i; j < n; j++) 
            {
                counter = {{0,1}};
                ll cur = 0;
                for (ll k = 0; k < m; k++) 
                {
                    cur += A[k][j] - (i > 0 ? A[k][i - 1] : 0);
                    res += counter.find(cur - target) != counter.end() ? counter[cur - target] : 0;
                    counter[cur]++;
                }
            }
        }
        cout<<res<<endl;
		
	}
}
