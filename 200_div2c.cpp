#include <bits/stdc++.h>
using namespace std ;

long long int gcd(long long int a,long long int b)
{
	if(a==0)
		return b ;
	return gcd(b%a,a) ;
}

long long int ans1(long long int a,long long int b)
{
	if(a==0)
		return 0 ;
	return b/a + ans1(b%a,a) ;
}
int main()
{
	long long int a,b,count1=0,x,g ;
	cin >> a >> b ;
	//g = gcd(a,b) ;
	b = b ;
	x = a ;
	//cout << a << " " << b << "\n" ;
	/*while(x>=b)
	{
		count1++ ;
		x = x-b ;
	}*/
	//cout << gcd(3,4) << "\n" ;
	//cout << count1 << "\n" ;
	//cout << x << " " << b << " " ;
	count1 = count1 + ans1(x,b) ;
	cout << count1 << "\n" ;
	return 0 ;
}