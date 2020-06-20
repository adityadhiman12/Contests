
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll find(vector<ll>arr,ll n)
{
	ll high = 0;
   for (ll i = 0; i < n; i++)
   high = max(high, arr[i]);
   ll divisors[high + 1] = { 0 }; //array to store all gcd values
   for (ll i = 0; i < n; i++) {
      for (ll j = 1; j <= sqrt(arr[i]); j++) 
      {
         if (arr[i] % j == 0) 
         {
            divisors[j]++;
			if (j != arr[i] / j)
				divisors[arr[i] / j]++;
         }
      }
   }
   for (ll i = high; i >= 1; i--)
	if (divisors[i] > 1)
		return i;
}


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
		vector<ll>arr(n);
		for(ll i=0;i<n;i++)
			arr[i]=i+1; 
		cout<<find(arr,n)<<"\n";
	}
}
