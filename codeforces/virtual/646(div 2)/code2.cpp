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
		int c1=0;
		int ans=0;
		int c2=0;
		int start=0;
		int end=s.length()-1;
		while(start<=end)
		{
			if(c1==2)
			{
				if(s[start]=='1')
				{
					start++;
					ans++;
				}
			}	
			if(c2==2)
			{
				if(s[start]=='0')
				{
					start++;
					ans++;
				}
			}
			if(s[start]=='0')
				c1++;
			else
				c2++;
			if(s[end]=='0')
				c1++;
			else
				c2++;
			start++;
			end--;
			
		}
		cout<<ans<<"\n";		
	}
}	
