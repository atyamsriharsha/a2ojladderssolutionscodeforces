#include <bits/stdc++.h>
using namespace std ;
const int maxn = 5e8;

long long int gcd(long long int a,long long int b)
{
	return b==0?a:gcd(b, a % b);
}

int main()
{
	int n, k;
	cin >> n >> k;
	if(n==1 && k==0)
	{
		cout << 1 ;
		return 0 ;
	}
	if(n==1 || k<n/2)
	{ 
		cout << -1 ;
		return 0 ;
	}
	k = k - (n-2)/2 ;
	printf("%d %d", k, k * 2);
	for(int i=2;i<n;i++) 
		printf(" %d",maxn+i);
	return 0 ;
}