#include <bits/stdc++.h>
using namespace std ;
const long long int mod = 1000000000+9 ;

long long int power(long long int a,long long int b)
{
	long long int res = 1 ;
	while(b)
	{
		if(b%2!=0)
		{
			res = ((res)*(a))%mod ;
			b = b/2 ;
			a = ((a)*(a))%mod ;
		}
		else
		{
			res = res%mod ;
			b = b/2 ;
			a = (a*a)%mod ;
		}
	}
	return res ;
}

int main()
{
	long long int n,m,k,x,ans ;
	cin >> n >> m >> k ;
	x = max(0LL,m-(n-n%k)/k*(k-1)-n%k) ;
	ans = power(2,x+1) ;
	ans = ans-2 ;
	ans = (ans)*(k)%mod ;
	ans = (ans + (m-x*k))%mod ;
	ans = (ans+mod)%mod ;
	cout << ans << "\n" ;
	return 0 ;
}