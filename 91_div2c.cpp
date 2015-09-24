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
	for(ll x : v) 
	{
		res += ll(x)*(min(x, b)-a+1);
		a = x+1;
		if(a>b) 
			break;
	}
	cout << res << endl;
	return 0;
}