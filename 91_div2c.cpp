#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
vector<ll> v;
ll a, b;

void go(ll x) 
{
	if(x>1000000000000000) 
		return;
	if(x>=a) 
		v.push_back(x);
	go(x*10+4);
	go(x*10+7);
}

int main()
{
	cin >> a >> b;
	go(0);
	sort(v.begin(),v.end());
	ll res = 0;
	long long int *p = lower_bound(v.begin(),v.end(),a) ;
	for(long long int i=a;i<=b;i++)
	{
		p = lower_bound(v.begin()+*p,v.end(),i) ;
		res+=*p ;
	}
	cout << res << endl;
	return 0;
}