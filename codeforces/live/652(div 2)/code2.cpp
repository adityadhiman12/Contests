#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string x;
		cin>>x;
		ll zero=0;
		ll one=0;
		int flag=0;
		int zeroI=INT_MAX;
		int oneI=INT_MAX;		
		if(x.length()==1)
			flag=1;
		if(flag==1)
		{
			//cout<<"length of string 1";
			cout<<x<<endl;
			continue;
		}
		ll yy=0;
		for(ll i=0;i<n;i++)
		{
			if(x[i]=='0')
			{
				zeroI=i;
				zero++;
			}
			else
			{
				oneI=i;
				one++;
			}
			if(flag==0 && oneI>zeroI)
			{
				flag=1;
			}
			else if(zeroI>oneI && oneI!=0)
			{
				//cout<<zeroI<<"   "<<oneI<<endl;
				yy++;
			}			
		}
		//cout<<flag<<" "<<yy<<endl;
		if(flag==1 && yy==0)
		{
			//cout<<" no one element before zero";
			cout<<x<<endl;
			continue;
		}
		else 
		{
			while(zero>=one)
			{
				for(int i=0;i<n;i++)
				{
					if(x[i]=='0')
					{
						x.erase(x.begin()+i);
						break;
					}
				}
				zero--;
			}
			//cout<<x<<endl;
			//cout<<zero<<" "<<one<<endl;
			while(one>0 && zero>0 && one>=zero)
			{
				//cout<<zero<<" "<<one<<" inside"<<endl;
				if(one-zero<=2 && one>0 && (--zero!=0) && one>=zero)
				{
					int ke=0;
					for(int i=0;i<n;i++)
					{
						if(x[i]=='0')
						{
							x.erase(x.begin()+i);
							zero--;
							//cout<<zero<<" "<<one<<" inside dlete 0"<<endl;
							ke=1;
							break;
						}
						if(ke==1)
							break;
						
					}
				}
				else
				{
					int ke=0;
					for(int i=0;i<n;i++)
					{
						if(x[i]=='1')
						{
							x.erase(x.begin()+i);
							one--;
							//cout<<zero<<" "<<one<<" inside dlete 1"<<endl;
							ke=1;
							break;
						}
						if(ke==1)
							break;
						
					}			
				}
			}
			
			cout<<"after"<<endl;
			cout<<x<<endl;
			cout<<"next step"<<endl;
			//cout<<zero<<" "<<one<<endl;	
			//cout<<" after "<<x<<endl;// (DEBUG)
			
			
			///////////////////////
			ll mm=0;
			for(ll i=0;i<x.length();i++)
			{
				if(x[i]=='0')
				{
					zeroI=i;
					zero++;
				}
				else
				{
					oneI=i;
					one++;
				}
				if(flag==0 && oneI>zeroI)
				{
					flag=1;
				}
				else if(zeroI>oneI && oneI!=0)
				{
					//cout<<zeroI<<"   "<<oneI<<endl;
					mm++;
				}			
			}
			//cout<<flag<<" "<<yy<<endl;
			if(flag==1 && yy==0)
			{
				//cout<<" no one element before zero";
				cout<<x<<endl;
			}
			else
				cout<<x[0]<<endl;
		}
	}
}
