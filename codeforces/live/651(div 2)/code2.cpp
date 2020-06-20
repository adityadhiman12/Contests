#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int find(vector<int>arr,int n)
{
	
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
		vector<int>arr(2*n);
		for(int i=0;i<(2*n);i++)
			cin>>arr[i];
		cout<<find(arr,n)<<"\n";
	}
}
