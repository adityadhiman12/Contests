#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int ones=0;
		int zeroes=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0')
				zeroes++;
			else
				ones++;
		}
		int ans=min(zeroes,ones);
		int done0s=0;
		int done1s=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0')
			{
				done0s++;
				zeroes--;
			}
			if(s[i]=='1')
			{
				done1s++;
				ones--;
			}
			ans=min(ans,done1s+zeroes);
			ans=min(ans,done0s+ones);
		}
		
		cout<<ans<<"\n";		
	}
}	
