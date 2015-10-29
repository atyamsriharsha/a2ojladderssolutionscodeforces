#include <bits/stdc++.h>
using namespace std ;
bool prime(long long int a)
{
	if(a%2==0)
		return 0 ;
	for(long long int i=3;i*i<=a;i=i+2)
	{
		if(a%i==0)
		{
			return 0 ;
		}
	}
	return 1 ;
}

int main()
{
	long long int n ;
	cin >> n ;
	//cout << prime(n) ;
	for(long long int i=1;i<n;i++)
	{

	}
	return 0 ;
}