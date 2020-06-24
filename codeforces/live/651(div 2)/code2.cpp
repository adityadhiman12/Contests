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
		vector<int>arr(2e5 + 5);
		vector<int>even;
		vector<int>odd;
		for(int i=1;i<=2*n;i++)
		{
			cin>>arr[i];
			if(arr[i]%2==0)
				even.push_back(i);
			else
				odd.push_back(i);
		}
		vector<pair<int,int>>ans;
		for(int i=0;i+1<odd.size();i+=2)
			ans.push_back({odd[i],odd[i+1]});
		for(int i=0;i+1<even.size();i+=2)
			ans.push_back({even[i],even[i+1]});
		for(int i=0;i<n-1;i++)
			cout<<ans[i].first<<" "<<ans[i].second<<"\n";			
	}
}
