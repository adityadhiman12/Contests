#include<bits/stdc++.h>
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
		cin>>n;
		if(n==1)
		{
			cout<<"FastestFinger"<<"\n";
			continue;
		}
		if(n%2==1 || n==2)
		{
			n/=n;
			cout<<"Ashishgup"<<"\n";
			continue;
		}
		int turn=0;
		int flag=0;
		int fac=1;
		while(n!=1)
		{
			if(n%2==1 && turn==0)
			{
				cout<<"Ashishgup"<<"\n";
				flag=1;
				break;
			}
			if(n%2==1 && turn==1)
			{
				cout<<"FastestFinger"<<"\n";
				flag=1;
				break;
			}
			fac=1;
			for(int i=1;i<=sqrt(n);i++)
			{
				if(n%i==0 && i!=1)
				{
					
					if(n/i==i)
					{									
						if(i%2==1 ) 
						{
							fac=i;
							break;
						}
					}
					else
					{
					
						if((n/i)%2==1)
						{
							fac=(n/i);
							break;
						}
						if(i%2==1)
						{
							fac=i;
							break;
						}
					}							
				}
			}
			
			if(fac==1)
				n-=1;
			else
			{
				n=n/fac;
			}
			if(turn==0)
				turn=1;
			else
				turn=0;
				
		}
		if(flag==1)
			continue;
		cout<<"FastestFinger"<<"\n";
		
		
	}
}
