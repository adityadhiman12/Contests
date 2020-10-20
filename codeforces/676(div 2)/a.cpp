#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

ll find(ll A,ll B)
{
	ll j = 0, x = 0; 
  
    // While either A or B is non-zero 
    while (A || B) { 
  
        // Position at which both A and B 
        // have a set bit 
        if ((A & 1) && (B & 1)) { 
  
            // Inserting a set bit in x 
            x += (1 << j); 
        } 
  
        // Left shifting both numbers to 
        // traverse all the bits 
        A >>= 1; 
        B >>= 1; 
        j += 1; 
    } 
    return x; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {		
		ll a,b;
		cin>>a>>b;
		ll key=find(a,b);
		cout<<(a^key)+(b^key)<<endl;
	}
    return 0;	
}
