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
		ll n;
		ll sum;
		for (sum = 0; n > 0; sum += n % 10, n /= 10); 
		if(n%2==0 || sum%3==0)
		{
				
		}
		else
			cout<<-1<<endl;
		
	}
}
