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
		string s;
		cin>>s;
		int zero=0;
		int one=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0')
				zero++;
			else 
				one++;
		}
		if(s.length()==1)
		{
			cout<<"NET"<<endl;
			continue;
		}
		string res="A";
		//int c=0;
		//int d=0;
		int flag=0;
		for(int i=0;i<s.length()-1;i+=2)
		{
			if(s[i]!=s[i+1] && flag==0)
			{
				c+=2;				
				flag=1;
			}
			else if(s[i]!=s[i+1] && flag==1)
			{
				d+=2;				
				flag=0;
			}			
				
		}
		if(c>d)
			cout<<"DA"<<endl;
		else
			cout<<"NET"<<endl;
		
	}
}
