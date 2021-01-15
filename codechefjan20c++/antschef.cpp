#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n,m,temp,pos=0,neg=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>m;
        for(ll i=0;i<m;i++)
        {
            cin>>temp;
            if(temp>0) pos++;
            else neg++;
        }
    }
    cout<<pos*neg<<"\n";
}
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
