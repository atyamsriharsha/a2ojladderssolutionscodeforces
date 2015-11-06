#include <bits/stdc++.h>
using namespace std ;

long long int gcd(long long int a,long long int b)
{
	if(b==0)
		return a ;
	return gcd(b,a%b) ;
}

int main()
{
	long long int t,w,b ;
	cin >> t >> w >> b ;
	long long int lcm1 = (w*b)/(gcd(w,b)) ;
	long long int ref = t/lcm1 ;
	long long int ref2 = t%lcm1 ;
	long long int min1 = min(w,b) ;
	long long int ans = ref*min1 ;
	if(ref2>=min1)
	{
		ref2 =min1-1 ; 
	}
	ans = ans+ref2 ;
	long long int result = gcd(ans,t) ;
	cout << ans/result << "/" << t/result << "\n" ;
	return 0 ;
}