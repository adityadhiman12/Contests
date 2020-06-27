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
		ll s,n;
		cin>>s>>n;
		if(s%n==0)
		{
			cout<<(s/n)<<endl;
			continue;
		}
		else
		{
			ll coins=0;
			ll rem=(s/n);
			coins+=rem;
			ll left=s%n;
			if(left%2==0)
				coins+=1;
			else
			{
				coins+=(1);
				left--;
				if(left%2==0 && left<=n && left!=0)
					coins+=1;
				
			}
			cout<<coins<<endl;
			
			
		}
		
	}
}
