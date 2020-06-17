#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>p(3);
        vector<ll>a(3);
        for(ll i=0;i<3;i++)
            cin>>p[i];
        for(ll i=0;i<3;i++)
            cin>>a[i];
        map<ll,ll>m;
        ll count=0;
        for(ll i=0;i<3;i++)
        {
            m[abs(p[i]-a[i])]++;
        }
        ll common_diff=INT_MIN;
        for(auto i=m.begin();i!=m.end();i++)
            if(i->second>common_diff)
                common_diff=i->first;
        int flag=0;
        for(int i=0;i<3;i++)
        {
            if((abs(p[i]-a[i]))<=common_diff && p[i]<a[i])
            {
                flag=1;
                p[i]+=common_diff;
            }
        }
        if(flag==1)
			count++;
        for(ll i=0;i<3;i++)
        {
            if(p[i]!=a[i])
            {
                
                p[i]+=count;
                if(a[i]%p[i]==0)
                {
                    count++;
                    p[i]=(a[i]/p[i])*p[i];
                }
            }
        }
        cout<<count<<"\n";
        
    }
}
