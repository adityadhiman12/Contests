#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int find(vector<int>arr,int n)
{
int high = 0; 
    for (int i = 0; i < n; i++) 
        high = max(high, arr[i]); 
    int count[high + 1] = {0}; 
    for (int i = 0; i < n; i++) 
        count[arr[i]]++; 
    int counter = 0; 
    for (int i = high; i >= 1; i--) 
    { 
        int j = i; 
       counter = 0; 
	    while (j <= high) 
        { 
  
            if(count[j] >=2) 
               return j; 
           else if (count[j] == 1)          
                counter++;          
            j += i; 
            if (counter == 2)          
                return i; 
        } 
    } 
}


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<int>arr(n);
		for(int i=0;i<n;i++)
			arr[i]=i+1; 
		cout<<find(arr,n)<<"\n";
	}
}
